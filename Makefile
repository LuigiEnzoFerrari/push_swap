PUSH_SW_NAME = push_swap
CHECKER_NAME = checker

CC := clang
SANIT := -g -fsanitize=address
CFLAGS := -Wall -Wextra -Werror
OFLAGS := 

LINK_LIB := -L libft -L libqueue -lft -lqueue

SRCS = push_swap_rotate.c \
	print_error.c check_args.c init_stack_a.c \
	bubblesort.c issorted.c \

SRCS_PUSH_SW = main.c pa_pb.c sa_sb_ss.c \
		ra_rb_rr.c rra_rrb_rrr.c \
		trinity.c infinity.c send_all_to_stack_b.c \
		nearest_value.c insert_all_to_stack_a.c insert_all_to_stack_a_utils.c \
		prepare_stacks.c

SRCS_CHECKER = main.c apply_instructions.c 

PATH_SRCS = $(addprefix srcs/, $(SRCS))
PATH_PUSH_SW = $(addprefix push_swap_srcs/, $(SRCS_PUSH_SW))
PATH_CHECKER = $(addprefix checker_srcs/, $(SRCS_CHECKER))

SRCS_LIBS = libft/libft.a libqueue/libqueue.a

INC = include

all: $(PUSH_SW_NAME) $(CHECKER_NAME)

$(PUSH_SW_NAME): $(PATH_PUSH_SW) $(SRCS_LIBS) $(PATH_SRCS)
	$(CC) $(CFLAGS) $(SANIT) $(PATH_PUSH_SW) $(PATH_SRCS) $(LINK_LIB) -o $@ -I $(INC)

$(CHECKER_NAME): $(PATH_CHECKER) $(SRCS_LIBS)
	$(CC) $(CFLAGS) $(SANIT) $(PATH_CHECKER) $(PATH_SRCS) $(LINK_LIB) -o $@ -I $(INC)

$(SRCS_LIBS):
	make -C libft
	make -C libqueue

clean:
	@$(RM) $(PUSH_SW_NAME)
	@$(RM) $(CHECKER_NAME)

fclean: clean
	make fclean -C libft
	make fclean -C libqueue

re: fclean all

.PHONY: all clean fclean re
