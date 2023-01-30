NAME = fixed
SRC = Fixed.cpp main.cpp 
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
CXX = c++ 
OBJ =  $(SRC:.cpp=.o)

OBJSUBDIR = object_files

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX)  $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf *.o
	@rm -rf overloads/*.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all 
