# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 11:20:59 by iboiraza          #+#    #+#              #
#    Updated: 2025/08/11 11:21:01 by iboiraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Cpp = c++
Cpp_FLAGS = -Wall -Wextra -Werror -std=c++98
INFILES = 	megaphone.cpp\

OBJFILES = $(INFILES:.cpp=.o)

NAME = megaphone

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
