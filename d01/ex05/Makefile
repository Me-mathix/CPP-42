NAME		=	Harl_2.0

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	Harl.cpp main.cpp 

INC_DIR		=	./

OBJ			=	$(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING Harl_2.0...\n"
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Harl_2.0 created\n"

clean:
	@echo "\033[0;31mDeleting Harl_2.0 object...\n"
	@rm -f $(OBJ) $(OBJB)
	@echo "\033[1;32mDone\n"

fclean: clean
	@echo "\033[0;31mDeleting Harl_2.0 executable..."
	@rm -f $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re