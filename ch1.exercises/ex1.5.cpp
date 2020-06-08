/*
Write code that invits the user to input separately strings that store their given name and their family name. Print the user's full name to screen.
*/

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	std::string firstName, lastName;

	std::cout << "I\'m curious about about the initial values\n";
	std::cout << firstName << "\n";
	std::cout << lastName << "\n";

	std::cout << "Type your first name: ";
	std::cout.flush();
	std::getline(std::cin, firstName);
	std::cout << "Type you last name: ";
	std::getline(std::cin, lastName);

	std::cout << "\nYour name is " << firstName << " " << lastName;
	<< "\n";	
	return 0;
}

