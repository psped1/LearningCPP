/*
Investigate the use of the compiler error warning flags descussed in Sect 1.3.3..
For example: (i) declare an integer as a constant variable and then attempt to change this value later in the code; and (ii) attempt to set an integer variable to the value 3.2.
*/

#include <iostream>
int main(int argc, char* argv[])
{
	const int a = 3;

	std::cout << "I will now overwrite this \n";

	a++;

	std::cout << "new value of a: " << a << "\n";

	a = 3.2;

	std::cout << "new value of a: " << a << "\n";

	return 0;
}
