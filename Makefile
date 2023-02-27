NAME		=	pipex
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror

DIR			=	./srcs/
HEADER		=	pipex.h

C_FILES		=	main.c childs.c error.c free.c\
				ft_strncmp.c ft_strdup.c ft_split.c ft_strjoin.c\
				ft_strlen.c ft_strlcpy.c ft_putendl_fd.c
				
SRCS		=	$(addprefix $(DIR), $(C_FILES))
OBJ			=	$(SRCS:.c=.o)

%.o: %.c $(DIR)$(HEADER) Makefile
				$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
				$(CC) $(OBJ) -o $(NAME)
				@echo -e "$(GREEN)$(NAME) created!$(DEFAULT)"

all: $(NAME)

clean:
				rm -rf $(OBJ)
				@echo -e "$(YELLOW)o-files deleted!$(DEFAULT)"

fclean:			clean
				rm -rf $(NAME)
				@echo -e "$(RED)$(NAME) deleted!$(DEFAULT)"

re:				fclean all

.PHONY:		all clean fclean re

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m
