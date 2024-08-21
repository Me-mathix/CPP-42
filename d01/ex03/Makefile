NAME		=	Unnecessary_violence

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	HumanA.cpp HumanB.cpp main.cpp Weapon.cpp 

INC_DIR		=	./

OBJ			=	$(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING Unnecessary_violence...\n"
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Unnecessary_violence created\n"

clean:
	@echo "\033[0;31mDeleting Unnecessary_violence object...\n"
	@rm -f $(OBJ) $(OBJB)
	@echo "\033[1;32mDone\n"

fclean: clean
	@echo "\033[0;31mDeleting Unnecessary_violence executable..."
	@rm -f $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re