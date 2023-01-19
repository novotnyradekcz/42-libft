LIBRARY = libft.a

SRCS = ft_atoi.c	ft_itoa.c        ft_putnbr_fd.c  ft_strlcpy.c  ft_tolower.c \
	ft_bzero.c    ft_memchr.c      ft_putstr_fd.c  ft_strlen.c   ft_toupper.c \
	ft_calloc.c   ft_memcmp.c      ft_split.c      ft_strmapi.c \
	ft_isalnum.c  ft_memcpy.c      ft_strchr.c     ft_strncmp.c \
	ft_isalpha.c  ft_memmove.c     ft_strdup.c     ft_strnstr.c \
	ft_isascii.c  ft_memset.c      ft_striteri.c   ft_strrchr.c \
	ft_isdigit.c  ft_putchar_fd.c  ft_strjoin.c    ft_strtrim.c \
	ft_isprint.c  ft_putendl_fd.c  ft_strlcat.c    ft_substr.c

BONUSSRCS = ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c \
	ft_lstdelone.c	ft_lstiter.c	ft_lstlast.c \
	ft_lstmap.c	ft_lstnew.c	ft_lstsize.c

OFILES := ${SRCS:.c=.o}

BONUSOFILES := ${BONUSSRCS:.c=.o}

INCLUDES = libft.h

FLAGS = -Wall -Wextra -Werror

.c.o:
	cc -c $(FLAGS) -I $(INCLUDES) $< -o ${<:.c=.o}

all:	$(LIBRARY)

$(LIBRARY):	$(OFILES)
	ar rc $(LIBRARY) $(OFILES)

bonus:	$(OFILES) $(BONUSOFILES)
	ar rc $(LIBRARY) $(OFILES) $(BONUSOFILES)

clean:
	rm -f $(OFILES) $(BONUSOFILES)

fclean:	clean
	rm -f $(LIBRARY)

re:	fclean all