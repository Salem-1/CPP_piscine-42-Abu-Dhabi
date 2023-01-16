NAME = megaphone
SRC = megaphone.cpp
CFLAGS= -Wall -Wextra -Werror -std=c++98
CC = c++ 
OBJ =  $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC)  $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf megaphone

re: fclean all 
