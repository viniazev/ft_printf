CC = cc
CFLAGS = -Wall -Wextra -Werror
INCFLAG = -I.
AR = ar -rcs
RM = rm -f
# Files
NAME = libftprintf.a
FILES = ft_printf.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_strlen.c\
	ft_isdigit.c\
	ft_puthex.c\
	ft_putptr.c\
	ft_putunsigned.c\
	handlers.c\
	parser.c
OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCFLAG) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
comp: all clean
	cc $(CFLAGS) testsuit.c libftprintf.a
.PHONY: all clean fclean re comp