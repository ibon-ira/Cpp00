Cpp = c++
Cpp_FLAGS = -Wall -Wextra -Werror -std=c++98
INFILES = 	main.cpp Contact.cpp PhoneBook.cpp

OBJFILES = $(INFILES:.cpp=.o)

NAME = PhoneBook

all: $(NAME)

$(NAME):$(OBJFILES)
	$(Cpp) $(Cpp_FLAGS) $(OBJFILES) -o $(NAME) 

%.o: %.cpp
	$(Cpp) $(Cpp_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
