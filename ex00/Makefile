NAME = ScalarConverter

SRC = ScalarConverter.cpp\
	main.cpp\

OBJ = $(SRC:.cpp=.o)

# CXX = cpp
CFLAG = -std=c++98 -Wall -Wextra -Werror

$(NAME):
	$(CFLAG) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all