NAME		=	megaphone

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp

INC_DIR		=	./inc

OBJ			=	$(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING megaphone...\n"
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./megaphone created\n"

clean:
	@echo "\033[0;31mDeleting megaphone object...\n"
	@rm -f $(OBJ) $(OBJB)
	@echo "\033[1;32mDone\n"

fclean: clean
	@echo "\033[0;31mDeleting megaphone executable..."
	@rm -f $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re