NAME = zombie
SRC = zombie.cpp main.cpp
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
CXX = c++ 
OBJ =  $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX)  $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf zombie

re: fclean all 
