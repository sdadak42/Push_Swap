NAME = push_swap

NAME_BONUS = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	push_swap.c \
		move_push.c \
		move_rev_rotate.c \
		move_rotate.c \
		move_swap.c \
		cost_utils.c \
		short_sort.c \
		move.c \
		sort_utils.c \

SRC_COMMON = utils.c \
			split.c \
			utils_list.c \
			free_and_exit.c \
			check_list.c \

SRC_BONUS = checker_bonus.c \
			get_next_line_bonus.c \
			gnl_utils_bonus.c \
			move_push_bonus.c \
			move_rev_rotate_bonus.c \
			move_rotate_bonus.c \
			move_swap_bonus.c \
			utils_bonus.c \

OBJS = $(SRCS:.c=.o)

OBJS_COMMON = $(SRC_COMMON:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

HDRS = push_swap.h

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_COMMON)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(OBJS_COMMON)

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_COMMON) $(OBJ_BONUS) 

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

bonus: $(OBJ_BONUS) $(OBJS_COMMON)
	$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJ_BONUS) $(OBJS_COMMON)

.PHONY: all clean fclean re bonus
