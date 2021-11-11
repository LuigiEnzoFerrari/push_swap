NAME = libqueue.a

SANIT = -g -fsanitize=address

SRCS = newNode.c insertFront.c nodeLast.c insertEnd.c \
	nodeFree.c lstFree.c nodeDelete.c lstDelete.c lstSize.c \
	lstPrint.c lstDuplicate.c \
	nodeMin.c nodeMax.c \

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
