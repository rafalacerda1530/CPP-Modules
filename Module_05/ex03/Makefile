NAME = main
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
LEAK = -fsanitize=address
SOURCE = main.cpp \
		Bureaucrat.cpp\
		Aform.cpp\
		ShrubberyCreationForm.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		Intern.cpp\

REMOVE = rm -rf

all: $(NAME) 

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(LEAK) -g $(SOURCE) -o $(NAME)

clean:
	$(REMOVE) $(NAME)

re: clean all
