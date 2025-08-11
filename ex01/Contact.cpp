/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:21:45 by iboiraza          #+#    #+#             */
/*   Updated: 2025/08/11 11:21:48 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

Contact::Contact(std::string first_name,
                 std::string last_name,
                 std::string nickname,
                 std::string phone_number,
                 std::string darkest_secret)
    : _First_name(first_name),
      _Last_name(last_name),
      _Nickname(nickname),
      _Phone_number(phone_number),
      _Darkest_secret(darkest_secret)
{}

std::string Contact::getFirstName() const
{
    return _First_name;
}

std::string Contact::getLastName() const
{
    return _Last_name;
}

std::string Contact::getNickname() const
{
    return _Nickname;
}

std::string Contact::getPhoneNumber() const
{
    return _Phone_number;
}

std::string Contact::getDarkestSecret() const
{
    return _Darkest_secret;
}
