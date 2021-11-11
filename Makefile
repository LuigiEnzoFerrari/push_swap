PUSH_SW_NAME = push_swap
CHECKER_NAME = checker

CC := clang
SANIT := -g -fsanitize=address
CFLAGS := -Wall -Wextra -Werror
OFLAGS := 

LINK_LIB := -L libft -L libqueue -lft -lqueue

SRCS_PUSH_SW = main.c push_swap_rotate.c pa_pb.c sa_sb_ss.c \
		ra_rb_rr.c rra_rrb_rrr.c check_args.c init_stack_a.c \
		trinity.c infinity.c bubblesort.c send_all_to_stack_b.c \
		nearest_value.c insert_all_to_stack_a.c insert_all_to_stack_a_utils.c \
		is_sorted.c

PATH_PUSH_SW = $(addprefix push_swap_srcs/, $(SRCS_PUSH_SW))
SRCS_CHECKER = main.c
SRCS_CHECKER = $(addprefix push_swap_srcs/, $(SRCS_CHECKER))

SRCS_LIBS = libft/libft.a libqueue/libqueue.a

INC = include

LIBS = libft/ libqueue/

all: $(PUSH_SW_NAME)

$(PUSH_SW_NAME): $(PATH_PUSH_SW) $(SRCS_LIBS)
	$(CC) $(CFLAGS) $(SANIT) $(PATH_PUSH_SW) $(LINK_LIB) -o $@ -I $(INC)

$(SRCS_LIBS): $(LIBS)
	make -C libft
	make -C libqueue

$(LIBS):
	git clone https://github.com/LuigiEnzoFerrari/42School_Libft.git libft
	git clone https://github.com/LuigiEnzoFerrari/libqueue.git libqueue

clean:
	$(RM) $(PUSH_SW_NAME)

fclean: clean
	make fclean -C libft
	make fclean -C libqueue

re: fclean all

.PHONY: all clean fclean re
