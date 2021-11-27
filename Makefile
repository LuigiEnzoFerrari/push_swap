CC := clang

MAIN_FILE := main.c

BASE := swap_rotate_push.c
BASE_PATH := $(addprefix base_srcs/, $(BASE))

PUSH_SRCS := pa_pb.c ra_rb_rr.c rra_rrb_rrr.c sa_sb_ss.c
PUSH_SWAP_PATH := $(addprefix push_swap_srcs/, $(PUSH_SRCS))

LIBS := liblist.a
LIB_PATH := list

LINK_LIBS := -L $(LIB_PATH) -llist

INC := include/ list/

INC_PATH := $(addprefix -I , $(INC))


ALL_SRCS := $(BASE_PATH) $(PUSH_SWAP_PATH)

all: a.out

a.out: $(LIB_PATH)/$(LIBS) $(MAIN_FILE) $(ALL_SRCS)
	$(CC) $(MAIN_FILE) $(ALL_SRCS) $(LINK_LIBS) $(INC_PATH)

$(LIB_PATH)/$(LIBS):
	make -C $(LIB_PATH)

clean:
	make clean -C $(LIB_PATH)

fclean:
	make fclean -C $(LIB_PATH)
