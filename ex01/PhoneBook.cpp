/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:22:15 by iboiraza          #+#    #+#             */
/*   Updated: 2025/08/11 11:22:17 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	complete_contact_info(Contact &con)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter first name: ";
	if (!(std::getline(std::cin, first_name)) || first_name.find_first_not_of(" \t\n\r\f\v") == std::string::npos)
		return (1);
	std::cout << "Enter last name: ";
	if (!(std::getline(std::cin, last_name)) || last_name.find_first_not_of(" \t\n\r\f\v") == std::string::npos)
		return (1);
	std::cout << "Enter nick name: ";
	if (!(std::getline(std::cin, nickname)) || nickname.find_first_not_of(" \t\n\r\f\v") == std::string::npos)
		return (1);
	std::cout << "Enter phone number: ";
	if (!(std::getline(std::cin, phone_number)) || phone_number.find_first_not_of(" \t\n\r\f\v") == std::string::npos)
		return (1);
	std::cout << "Enter darkest secret: ";
	if (!(std::getline(std::cin, darkest_secret)) || darkest_secret.find_first_not_of(" \t\n\r\f\v") == std::string::npos)
		return (1);
	con = Contact(first_name , last_name, nickname, phone_number, darkest_secret);
	return (0);
}

void PhoneBook::add()
{
    if (complete_contact_info(_contacts[_nextIndex]))
    {
        std::cout << "Error: Cannot add a contact with empty fields." << std::endl;
        return;
    }
    std::cout << "Contact successfully saved." << std::endl;
    _nextIndex = (_nextIndex + 1) % 8;
    if (_count < 8) _count++;
}

std::string printField(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::search() const
{
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|\n" 
              << " ========== ========== ========== ========== " << std::endl;

    int i = 0;
    while (i < _count)
    {

        std::cout << "|" << std::setw(10) << i << "|"
                  << std::setw(10) << printField(_contacts[i].getFirstName()) << "|"
                  << std::setw(10) << printField(_contacts[i].getLastName()) << "|"
                  << std::setw(10) << printField(_contacts[i].getNickname()) <<  "|" << std::endl;
        i++;
    }
    std::cout << "Enter index: ";
    std::string input;
    std::getline(std::cin, input);
    if (input.length() != 1 || !isdigit(input[0])) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    int idx = input[0] - '0';
    if (idx < 0 || idx >= _count) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    std::cout << "First Name: " << _contacts[idx].getFirstName() << std::endl;
    std::cout << "Last Name: " << _contacts[idx].getLastName() << std::endl;
    std::cout << "Nickname: " << _contacts[idx].getNickname() << std::endl;
    std::cout << "Phone Number: " << _contacts[idx].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << _contacts[idx].getDarkestSecret() << std::endl;
}
