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