#nome
NAME = libft.a
#dir src
DIR_SRC = srcs
#dir h
DIR_H = includes
#file names
C_FILES = main.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SRCS = $(wildcard $(DIR_SRC)/*.c)
OBJ = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wextra -Werror -Wall

# execução padrão, depende da existência e atualização de libft.a
all: $(NAME)

# constrói biblioteca libft.a
# $@ para alvo NAME, $^ para dependências OBJ
$(NAME): $(OBJ)
# 	ar rcs $? -o 
	ar rcs $@ $^

# gera arquivos .o
# gen_obj:
%.o: %.c
	$(CC) $(CFLAGS) -I$(DIR_H) -c $(<) -o $(@)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all


# find font files from dir "srcs"
# find header files from dir "includes"
# find libft.a from root
# do 'clean', 'fclean', 're' and 'all'
# functions 'ft_putchar', 'ft_putstr', 'ft_strcmp', 'ft_strlen' e 'ft_swap'