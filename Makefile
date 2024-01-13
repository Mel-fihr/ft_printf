NAME = libftprintf.a

SRC = ft_printf.c ft_print_hex.c ft_printf_char.c ft_printf_p.c ft_printf_str.c ft_printf_unsigned.c ft_putnbr.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

%.o: %.c
	@cc -Wall -Wextra -Werror -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean