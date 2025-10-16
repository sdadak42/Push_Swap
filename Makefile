NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

SRCS =	push_swap.c \
		moves/move_push.c \
		moves/move_rev_rotate.c \
		moves/move_rotate.c \
		moves/move_swap.c \
		utils/split.c \
		utils/utils_list.c \
		utils/utils.c \
		short_sort.c \
		free_and_exit.c \
		check_list.c \

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