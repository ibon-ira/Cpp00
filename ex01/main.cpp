#include <iostream>

void 

int	main()
{
	std::string input;

	while (input != "EXIT")
	{
		std::cout << "Write a command: ";
		if (!(std::getline(std::cin, input)))
			return (1);
		std::cout << "Leíste: " << input << std::endl;
		if (input == "ADD")
		{
			if (!phonebook.add())
				std::cout << "Error: Cannot add empty contact.\n";
		}
		if (input == "SEARCH")
			phonebook.search();
	}
	return (0);
}

