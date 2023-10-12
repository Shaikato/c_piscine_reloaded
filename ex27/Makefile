SRCS = display_file.c

NAME   = ft_display_file

CC    = cc

FLAGS   = -Wall -Wextra -Werror

OBJS = 	${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -o $@ $(OBJS)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

.PHONY: clean fclean all