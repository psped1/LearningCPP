/*
* Exercise 2.3
*/
#include<iostream>

int main(int argc, char* argv[])
{
	int userInputInt = 0;
	int runningSum = 0;

	while( userInputInt != -1)
	{
	std::cout << "Enter an integer:\nIf you wish to end, enter -1\n";
	std::cin >> userInputInt;
	runningSum += userInputInt;

	std::cout << "The running total is:\t" << runningSum << "\n";
	std::cout << "Your last entry was:\t" << userInputInt << "\n";
	}
	return 0;
}
