/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig < rarodrig@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:19:27 by rarodrig          #+#    #+#             */
/*   Updated: 2022/06/21 21:39:32 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::ShowOptions(void){
	std::cout << "Welcome to your PhoneBook" << std::endl;
	std::cout << "You can type commands: " << std::endl;
	std::cout << "\"ADD\" to add a new contact" << std::endl;
	std::cout << "\"SEARCH\" to display your contact list" << std::endl;
	std::cout << "\"EXIT\" to exit" << std::endl;
}

bool Phonebook::CheckInput(std::string line){
	if (!line.compare("EXIT"))
		return(false);
	else if (!line.compare("ADD"))
		AddPhoneNumber();
	else if (!line.compare("SEARCH")){
		printAllContacts();
		GetContact();
	}
	else
		std::cout<<"Please, type a valid command"<<std::endl<<std::endl;
	return(true);
}

void Phonebook:: GetContact(void){
	std:: string id;
	int i;
	std:: string line;
	std::cout<<"Input the ID: ";
	std::getline(std::cin, line);
	i = 0;
	do{
		id = _listContact[i].getId();
		if (!id.compare(line)){
			PrintContact(i);
			i = 9;
		}
	}while(++i < _total);
}

void Phonebook::PrintContact(int i){
	std::cout << "FIRST NAME: " << this->_listContact[i].getFirstName() << std::endl; 
	std::cout << "LAST NAME: " << this->_listContact[i].getLastName() << std::endl;
	std::cout << "NICKNAME: " << this->_listContact[i].getNickName() << std::endl; 
	std::cout << "PHONE NUMBER: " << this->_listContact[i].getPhoneNumber() << std::endl; 
	std::cout << "DARK SECRET: " << this->_listContact[i].getSecret() << std::endl; 
}

void Phonebook::AddDarkSecret(void){
	std:: string line;
	std::cout<<"Set the Dark Secret: ";
	std::getline(std::cin, line);
	this->_listContact[_currentIndex].setDarkSecret(line);
}

void Phonebook::AddPhoneNum(void){
	std:: string line;
	bool validNumber = false;
	do {
		std::cout<<"Set the Phone Number: ";
		std::getline(std::cin, line);
		validNumber = isValidNumber(line);
		if (validNumber)
			this->_listContact[_currentIndex].setPhoneNumber(line);
	} while (!validNumber);
}

void Phonebook::AddNickName(void){
	std:: string line;
	std::cout<<"Set the NickName: ";
	std::getline(std::cin, line);
	this->_listContact[_currentIndex].setNickName(line);
}

void Phonebook::AddFirstName(void){
	std:: string line;
	std::cout<<"Set the first Name: ";
	std::getline(std::cin, line);
	this->_listContact[_currentIndex].setFirstName(line);
}

Phonebook::~Phonebook(void) {
	std::cout << "Bye Bye" << std::endl;
	return ;
}

void Phonebook::AddLastName(void){
	std:: string line;
	std::cout<<"Set the Last Name: ";
	std::getline(std::cin, line);
	this->_listContact[_currentIndex].setLastName(line);
}

void Phonebook::AddPhoneNumber(void){
	if (_currentIndex == 8)
		_currentIndex = 0;
	AddFirstName();
	AddLastName();
	AddNickName();
	AddPhoneNum();
	AddDarkSecret();
	if (_total < 8)
		_total++;
	this->_listContact[_currentIndex].setId(_currentIndex);
	this->_currentIndex++;
}

void Phonebook::setIndex(void){
	this->_currentIndex = 0;
	this->_total = 0;
}

bool	Phonebook::isValidNumber(std::string phoneNumber) {
	if (phoneNumber.length() == 0)
		return false;
	for (int i = 0; phoneNumber[i]; i++) {
		if (!isdigit(phoneNumber[i]) && phoneNumber[i] != ' ') {
			std::cout << "Please inform a valid number" << std::endl;
			return false;
		}
	}
	return true;
}

std::string	Phonebook::resizeString(std::string str) {
	std::string newStr;

	if (str.length() > 10) {
		newStr = str.substr(0, 10);
		newStr[9] = '.';
		return newStr;
	}
	return str;
} 

void	Phonebook::printAllContacts(void) {
	std::cout << "|        ID|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "*********************************************" << std::endl;
	for (int i = 0; i < _total; i++) {
		std::cout << std::right <<
		'|' << std::setw(10) << resizeString(_listContact[i].getId()) <<
		'|' << std::setw(10) << resizeString(_listContact[i].getFirstName()) <<
		'|' << std::setw(10) << resizeString(_listContact[i].getLastName())<<
		'|' << std::setw(10) << resizeString(_listContact[i].getNickName())<< 
		'|' << std::endl;
	}
}
