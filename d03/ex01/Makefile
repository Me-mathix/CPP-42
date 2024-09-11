NAME		=	ScavTrap

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp ClapTrap.cpp ScavTrap.cpp

INC_DIR		=	./

OBJ			=	$(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING Fixed...\n"
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Fixed created\n"

clean:
	@echo "\033[0;31mDeleting Fixed object...\n"
	@rm -f $(OBJ) $(OBJB)
	@echo "\033[1;32mDone\n"

fclean: clean
	@echo "\033[0;31mDeleting Fixed executable..."
	@rm -f $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re