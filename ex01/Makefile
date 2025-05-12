# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 19:58:53 by spitul            #+#    #+#              #
#    Updated: 2025/05/12 20:15:41 by spitul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(addprefix obj/, $(SRC:.cpp=.o))
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = PhoneBook

all: $(NAME)

obj/%.o: %.cpp
		mkdir -p obj
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf obj

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re		
