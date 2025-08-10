#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <string>
# include <iomanip> 

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
        Contact(std::string First_name, std::string Last_name, std::string Nickname, std::string Phone_number, std::string Darkest_secret);
	    
        //Setters->  const garantiza que no modificas la cadena 
        //void setFirstName(const std::string &fn) { _First_name = fn; }
    	//void setLastName(const std::string &ln) { _Last_name = ln; }
	    //void setNickname(const std::string &nn) { _Nickname = nn; }
	    //void setPhoneNumber(const std::string &pn) { _Phone_number = pn; }
	    //void setDarkestSecret(const std::string &ds) { _Darkest_secret = ds; }

        //getters
        std::string	getFirstName() const;
        std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
		time_t		getCreated() const;

};

#endif