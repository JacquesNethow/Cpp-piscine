NAME	= ./animals

CC		= c++

CFLAGS	=  -Wall -Wextra -Werror -std=c++98

SRC 	= main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJ	= $(SRC:%.cpp=$(OBJ_DIR)/%.o)

OBJ_DIR	= obj

$(NAME):	$(OBJ_DIR) $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ_DIR)

fclean:	clean
		rm -rf $(NAME)

$(OBJ_DIR):
		mkdir -p $(OBJ_DIR)

re:		fclean $(NAME)