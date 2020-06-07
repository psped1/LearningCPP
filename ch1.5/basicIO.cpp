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
/*
I had an issue where it appeared that the program ignored the getline() function, and immediately printed "Your name is", and then exited.

After some googling I found out that the reason is that the '>>' operator ignores the trailing '\n' charater, so it is just sat in the buffer. Hence, the solution is to make sure the input buffer is cleared, and synced before the program reaches the getline() call.

The common consensus on StackOverflow is within a function you should either use >> or getline, but not both.
*/
	std::cout.flush();
	//std::cin.clear();
	//std::cin.sync();
/*
Okay, so clear() sync() didn't solve it for some reason.
The next advice is to instrcut the console to ignore the current input buffer. Let's see if it works.
*/
	std::cin.ignore();
	std::getline(std::cin, name);

	
	std::cout << "Your name is " << name << "\n";

	return 0;
}
