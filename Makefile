PUSH_SW_NAME = push_swap
CHECKER_NAME = checker

CC := clang
SANIT := -g -fsanitize=address
CFLAGS := -Wall -Wextra -Werror
OFLAGS := 

LINK_LIB := -L libft -L libqueue -lft -lqueue

SRCS_PUSH_SW = main.c push_swap_rotate.c pa_pb.c sa_sb_ss.c \
		ra_rb_rr.c rra_rrb_rrr.c check_args.c init_stack_a.c \
		trinity.c infinity.c bubblesort.c insert_all_to_stack_a.c \

PATH_PUSH_SW = $(addprefix push_swap_srcs/, $(SRCS_PUSH_SW))
SRCS_CHECKER = checker_srcs/main.c
SRCS_LIBS = libft/libft.a libqueue/libqueue.a

INC = include

all: $(PUSH_SW_NAME)

$(PUSH_SW_NAME): $(PATH_PUSH_SW) $(SRCS_LIBS)
	$(CC) $(CFLAGS) $(SANIT) $(PATH_PUSH_SW) $(LINK_LIB) -o $@ -I $(INC)

$(SRCS_LIBS):
	make -C libft
	make -C libqueue

clean:
	$(RM) $(PUSH_SW_NAME)

fclean: clean
	make fclean -C libft
	make fclean -C libqueue

re: fclean all

.PHONY: all clean fclean re
