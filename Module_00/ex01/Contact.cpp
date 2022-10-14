/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig < rarodrig@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:39:56 by rarodrig          #+#    #+#             */
/*   Updated: 2022/06/21 22:02:58 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <sstream>

Contact::Contact(void) {
	return ;
}


Contact::~Contact(void) {
	return ;
}

void	Contact::setFirstName(std::string name) {
	this->_firstName = name;
}

void	Contact::setId(int Id) {
	this->_id = Id;
}

void	Contact::setLastName(std::string name) {
	this->_lastName = name;
}

void	Contact::setNickName(std::string name) {
	this->_nickName = name;
}

void	Contact::setPhoneNumber(std::string name) {
	this->_phoneNumber = name;
}

void	Contact::setDarkSecret(std::string name) {
	this->_darkSecret = name;
}

std::string	Contact::getFirstName(void) {
	return this->_firstName;
}

std::string	Contact::getLastName(void) {
	return this->_lastName;
}

std::string	Contact::getNickName(void) {
	return this->_nickName;
}

std::string	Contact::getPhoneNumber(void) {
	return this->_phoneNumber;
}

std::string	Contact::getSecret(void) {
	return this->_darkSecret;
}

std::string	Contact::getId(void) {
	std::string Result;
	std::ostringstream  convert;
	convert << this->_id;
	Result = convert.str();
	return Result;
}
