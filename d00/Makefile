NAME	=	megaphone
SRC		=	megaphone.cpp
OBJ		=	$(SRC:.c=.o)
FLAGS	=	-Wall -Wextra -Werror
CC		=	clang++

all: $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -o $@ -c $?

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "Sucess: Program compiled." 

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all