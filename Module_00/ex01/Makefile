NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE =	main.cpp\
			Phonebook.cpp \
			Contact.cpp

REMOVE = rm -rf

all: $(NAME) 

$(NAME): 
	$(CC) $(FLAGS) -g $(SOURCE) -o $(NAME) -I ./

clean:
	$(REMOVE) $(NAME)

re: clean all
