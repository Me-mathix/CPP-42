NAME		=	Harl_filter

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	Harl.cpp main.cpp 

INC_DIR		=	./

OBJ			=	$(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING Harl_filter...\n"
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Harl_filter created\n"

clean:
	@echo "\033[0;31mDeleting Harl_filter object...\n"
	@rm -f $(OBJ) $(OBJB)
	@echo "\033[1;32mDone\n"

fclean: clean
	@echo "\033[0;31mDeleting Harl_filter executable..."
	@rm -f $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re