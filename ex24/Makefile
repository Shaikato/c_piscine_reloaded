SRCS = srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

NAME   = libft.a

CC    = cc

FLAGS   = -Wall -Wextra -Werror

OBJ    = $(addprefix $(SRCDIR), $(SRCS:.c=.o))

SRCDIR   = ./srcs/

INCDIR   = ./includes/

all: $(NAME)

$(NAME): $(OBJ)
        ar -rcs $@ $^

$(OBJ): $(SRCDIR)%.o : $(SRCDIR)%.c
        $(CC) $(FLAGS) -I $(INCDIR) -c $< -o $@

clean:
        rm -rf $(OBJ)

fclean: clean
        rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all