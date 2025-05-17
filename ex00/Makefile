SRC = megaphone.cpp 
OBJ = $(addprefix obj/, $(SRC:.cpp=.o))
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g


NAME = megaphone

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

re: fclean all

.PHONY: all clean fclean re		