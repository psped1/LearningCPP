#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	//Dumb input
	int account, PIN;
	std::string name;

	std::cout << "Enter your account:\n";
	std::cin >> account;
	std::cout << "Enter your PIN:\n";
	std::cin >> PIN;

	std::cout << "Account: " << account << "\n PIN: " << PIN <<"\n";

	std::cout <<" Enter your account, followed by your PIN\n";

	std::cin >> account >> PIN;
	std::cout << "Account: " << account << "\n PIN: " << PIN <<"\n";
	std::cout.flush();

	std::cout << "Dealing with strings is a little different under the hood.\n\n So now we will accept a full name, with spaces as a string.\n\nEnter your full name: \n";
	std::cout.flush();
	std::cin.clear();
	std::getline(std::cin, name);

	
	std::cout << "Your name is " << name << "\n";

	return 0;
}
