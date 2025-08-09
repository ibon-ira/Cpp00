#include "Contact.hpp"

Contact::Contact() {
    // Constructor por defecto
}

Contact::~Contact() {
    // Destructor
}

/*Contact::Contact(std::string First_name, std::string Last_name,
                 std::string Nickname, std::string Phone_number,
                 std::string Darkest_secret)
    : _First_name(First_name),
      _Last_name(Last_name),
      _Nickname(Nickname),
      _Phone_number(Phone_number),
      _Darkest_secret(Darkest_secret) {
}*/

std::string Contact::getFirstName() const {
    return _First_name;
}

std::string Contact::getLastName() const {
    return _Last_name;
}

std::string Contact::getNickname() const {
    return _Nickname;
}

std::string Contact::getPhoneNumber() const {
    return _Phone_number;
}

std::string Contact::getDarkestSecret() const {
    return _Darkest_secret;
}

time_t Contact::getCreated() const {
    return _Created;
}