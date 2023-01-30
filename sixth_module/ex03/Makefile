NAME = ./bureaucrat
SRC =  main.cpp Bureaucrat.cpp AForm.cpp \
		ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp\
		Intern.cpp
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
