#ifndef CONTACT_H
# define CONTACT_H
# include <ctime>
# include <iostream>
# include <string>

class Contact
{
    private:
        std::string _First_name;
        std::string _Last_name;
	    std::string _Nickname;
	    std::string _Phone_number;
	    std::string _Darkest_secret;
	    time_t 		_Created;

    public:
        Contact();
        ~Contact();
        Contact(std::string First_name, std::string Last_name, std::string Nickname, std::string Phone_number, std::string Darkest_secret;)
	    
        //Setters->  const garantiza que no modificas la cadena 
        void setFirstName(const std::string &fn) { first_name = fn; }
    	void setLastName(const std::string &ln) { last_name = ln; }
	    void setNickname(const std::string &nn) { nickname = nn; }
	    void setPhoneNumber(const std::string &pn) { phone_number = pn; }
	    void setDarkestSecret(const std::string &ds) { darkest_secret = ds; }
    };

#endif