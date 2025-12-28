NAME	= push_swap
BONUS	= checker
CC	= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= \
	  main.c parse.c parse_utils.c \
	  list.c utils.c index.c ops_core.c ops_do.c ops_parse.c \
	  sort_small.c sort_radix.c sort_helpers.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: $(NAME)
	cp $(NAME) $(BONUS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(BONUS)

re: fclean all

.PHONY: all clean fclean re
