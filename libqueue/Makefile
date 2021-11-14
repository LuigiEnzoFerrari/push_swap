NAME = libqueue.a

SANIT = -g -fsanitize=address

SRCS = new_node.c insert_front.c node_last.c insert_end.c \
	node_free.c lst_free.c node_delete.c lst_delete.c lst_size.c \
	lst_print.c lst_duplicate.c \
	node_min.c node_max.c \

OBJS = $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	clang -c $(SRCS) -I ./

run:
	clang main.c libqueue.a $(SANIT) -I .

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean re

.PHONY: all clean fclean re
