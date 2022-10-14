/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:58:57 by rarodrig          #+#    #+#             */
/*   Updated: 2022/06/23 03:17:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main(void){
	bool PhoneRun;
	Phonebook phone;
	std::string line;

	PhoneRun = true;
	phone.setIndex();
	do{
		phone.ShowOptions();
		std::cout<<"Command: ";
		std::getline(std::cin, line);
		std::cout << std::endl;
		PhoneRun = phone.CheckInput(line);
	}while(PhoneRun);
}
