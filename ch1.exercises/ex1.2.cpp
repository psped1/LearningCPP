/*
Write code that asks a user to enter two integers from the keyboard an then writes the product of these integers to the screen.
*/

#include <iostream>

int main(int argc, char* argv[])
{
	int integer1, integer2;

	std::cout << "Please type two integers that you wish to sum. \nNote: it is important to hit enter between typeing each integer.\n";
	std::cin >> integer1 >> integer2;

	int summation = 0;
	summation = integer1 + integer2;

	std::cout << "The sum of your itegers is " << summation
		<< "\n";
	
	return 0;
}
