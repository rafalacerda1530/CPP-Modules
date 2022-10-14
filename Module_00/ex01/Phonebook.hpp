#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string.h>
# include <iostream>
# include <cctype>
# include <iomanip>
# include <locale>
#include "Contact.hpp"

class Phonebook{

	public:
		~Phonebook(void);
		bool	CheckInput(std::string line);
		void	ShowOptions(void);		
		void	setIndex(void);
		void	AddPhoneNumber(void);
		void	AddPhoneNum(void);
		void 	AddFirstName(void);
		void 	AddLastName(void);
		void 	AddNickName(void);
		void	AddDarkSecret(void);
		bool	isValidNumber(std::string phoneNumber);
		void	printAllContacts(void);
		std::string resizeString(std::string str);
		void GetContact(void);
		void PrintContact(int i);
	private:
		Contact _listContact[8];
		int		_currentIndex;
		int		_total;
};

#endif