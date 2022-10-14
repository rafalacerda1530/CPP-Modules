NAME = harl
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
LEAK = -fsanitize=address
SOURCE = main.cpp Harl.cpp\


REMOVE = rm -rf

all: $(NAME) 

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(LEAK) -g $(SOURCE) -o $(NAME)

clean:
	$(REMOVE) $(NAME)

re: clean all