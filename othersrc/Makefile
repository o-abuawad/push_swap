NAME = libftpushswap.a
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
SRCS = assign_index.c \
		  bucket_sort.c \
		  checkandparse.c \
		  main.c \
		  pa.c \
		  parse.c \
		  pb.c \
		  push.c \
		  ra.c \
		  rb.c \
		  rev_rotate.c \
		  rotate.c \
		  rr.c \
		  rra.c \
		  rrb.c \
		  rrr.c \
		  sa.c \
		  sb.c \
		  selection_sort.c \
		  ss.c \
		  swap.c
OBJS = $(SRCS:.c=.o)
all: $(NAME) libft.a
$(NAME): $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)
%.o: %.c push_swap.h
		$(CC) $(CFLAGS) -c $< -o $@
clean :
		rm -rf $(OBJS)
fclean : clean
		rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re
