NAME = zombie
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp \
	newZombie.cpp\
	randomChump.cpp\
	Zombie.cpp\

REMOVE = rm -rf

all: $(NAME) 

$(NAME): $(SRC)
	$(CC) $(FLAGS) -g $(SOURCE) -o $(NAME)

clean:
	$(REMOVE) $(NAME)

re: clean all
