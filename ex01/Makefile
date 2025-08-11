# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 11:22:05 by iboiraza          #+#    #+#              #
#    Updated: 2025/08/11 11:22:07 by iboiraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
