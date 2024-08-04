NAME		=	phonebook

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.c \
				add.cpp \
				Contact.cpp \
				PhoneBook.cpp \

INC_DIR		=	./inc

OBJ			=	$(SRC:.c=.o)

.c.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING phonebook...\n"
	$(CC) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./phonebook created\n"

clean:
	@echo "\033[0;31mDeleting phonebook object...\n"
	@rm -f $(OBJ) $(OBJB)
	@echo "\033[1;32mDone\n"

fclean: clean
	@echo "\033[0;31mDeleting phonebook executable..."
	@rm -f $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re