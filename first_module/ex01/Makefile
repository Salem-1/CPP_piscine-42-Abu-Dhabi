NAME = phonebook
TEST = dev_phonebook
SRC = phonebook.cpp contact.cpp contact_errs.cpp phonebook_utils.cpp\
	  contact_setters.cpp contact_getters.cpp main.cpp
TEST_F = test/test_phonebook.cpp  $(SRC)
CFLAGS= -Wall -Wextra -Werror -std=c++98
CC = c++ 
OBJ =  $(SRC:.cpp=.o)
T_OBJ = $(TEST_F:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CC)  $(CFLAGS) $(OBJ) -o $(NAME)
	clear
clean:
	@rm -rf *.o
	@rm -rf test/*.o

fclean: clean
	@rm -rf phonebook
	@rm -rf dev_phonebook

re: fclean all 


test: $(TEST)
$(TEST): $(T_OBJ)
	$(CC)  $(CFLAGS) $(T_OBJ) -o $(TEST)
	clear

t: fclean test