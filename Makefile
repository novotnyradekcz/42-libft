LIBRARY = libft.a

SRCS = srcs/ft_putchar.c \
       srcs/ft_swap.c \
       srcs/ft_putstr.c \
       srcs/ft_strlen.c \
       srcs/ft_strcmp.c

OFILES = srcs/ft_putchar.o \
	 srcs/ft_swap.o \
	 srcs/ft_putstr.o \
	 srcs/ft_strlen.o \
	 srcs/ft_strcmp.o

INCLUDES = includes

FLAGS = -Wall -Wextra -Werror

all:	$(LIBRARY)

$(LIBRARY):	$(OFILES)
	ar rc $(LIBRARY) $(OFILES)

$(OFILES):	$(SRCS) $(INCLUDES)
	cc -c $(FLAGS) -I $(INCLUDES) $< -o $@

clean:
	rm $(OFILES)

fclean:	clean
	rm $(LIBRARY)

re:	fclean all