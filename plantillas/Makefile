FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

O_FILES = ${FILES:.c=.o}

FLAGS = -Werror -Wextra -Wall

CR_LIB = ar rc

RM = rm -f

CC = gcc

all: ${O_FILES}
	@${CC} $< -L.. -lft
.c.o:
	@${CC} -c $< -o ${<:.c=.o}

clean:
	${RM} ${O_FILES}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: .c.o clean fclean re all
