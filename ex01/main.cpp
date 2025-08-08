#include "Contact.hhp"

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
	con.setFirstName(first_name);
	con.setLastName(last_name);
	con.setNickname(nickname);
	con.setPhoneNumber(phone_number);
	con.setDarkestSecret(darkest_secret);
	return (0);
}


int	main()
{
	std::string input;
	Contact	Contact;

	while (input != "EXIT")
	{
		std::cout << "Write a command: ";
		if (!(std::getline(std::cin, input)))
			return (1);
		std::cout << "Leíste: " << input << std::endl;
		if (input == "ADD")
		{
			if (complete_contact_info(Contact))
				std::cout << "Error: Cannot add a conctact with empty fields.\n";
			else
				std::cout << "Contact saved successfully.\n";
		}
		//if (input == "SEARCH")
			//phonebook.search();*/
	}
	return (0);
}
