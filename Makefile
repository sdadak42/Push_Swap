NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	push_swap.c \
		move_push.c \
		move_rev_rotate.c \
		move_rotate.c \
		move_swap.c \
		split.c \
		utils_list.c \
		utils.c \
		cost_utils.c \
		short_sort.c \
		free_and_exit.c \
		check_list.c \
		move.c \

OBJS = $(SRCS:.c=.o)

HDRS = push_swap.h

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
