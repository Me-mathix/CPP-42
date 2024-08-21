NAME		=	BraiiiiiiinnnzzzZ

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 

INC_DIR		=	./

OBJ			=	$(SRC:.cpp=.o)

.cpp.o:main.cpp
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING BraiiiiiiinnnzzzZ...\n"
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./BraiiiiiiinnnzzzZ created\n"

clean:
	@echo "\033[0;31mDeleting BraiiiiiiinnnzzzZ object...\n"
	@rm -f $(OBJ) $(OBJB)
	@echo "\033[1;32mDone\n"

fclean: clean
	@echo "\033[0;31mDeleting BraiiiiiiinnnzzzZ executable..."
	@rm -f $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re