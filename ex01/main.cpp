#include "PhoneBook.hpp"

int	main()
{
	std::string input;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Write a command: ";
		if (!(std::getline(std::cin, input)))
			return (1);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
