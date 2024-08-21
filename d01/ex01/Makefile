NAME		=	Moar_brainz!

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp Zombie.cpp zombieHorde.cpp 

INC_DIR		=	./

OBJ			=	$(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING Moar_brainz!...\n"
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Moar_brainz! created\n"

clean:
	@echo "\033[0;31mDeleting Moar_brainz! object...\n"
	@rm -f $(OBJ) $(OBJB)
	@echo "\033[1;32mDone\n"

fclean: clean
	@echo "\033[0;31mDeleting Moar_brainz! executable..."
	@rm -f $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re