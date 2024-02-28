NAME = libft.a
SOURCE = ft_bzero.c ft_itoa.c ft_calloc.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memset.c ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substring.c ft_putchar_fd.c ft_isalpha.c ft_split.c
BSOURCE = ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c
C = gcc
OBJ = $(SOURCE:.c=.o)
BOBJ = $(BSOURCE:.c=.o)
FLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(C) $(FLAGS) -c $< -o $@

bonus: $(OBJ) $(BOBJ)
	ar rcs $(NAME) $(OBJ) $(BOBJ)

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
