/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:22:24 by iboiraza          #+#    #+#             */
/*   Updated: 2025/08/11 11:22:26 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _count;
        int _nextIndex;
        
    public:
        PhoneBook() : _count(0), _nextIndex(0) {}
        
        void add();
        void search() const;

};

#endif
