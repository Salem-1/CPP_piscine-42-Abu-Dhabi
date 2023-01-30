NAME = cast
SRC =  main.cpp CastStr.cpp check_str.cpp types_to_str.cpp
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
CXX = c++ 
OBJ =  $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX)  $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all 
