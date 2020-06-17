#include <iostream>

int main(int argc, char* argv[])
{
	bool myBool;

	if (myBool)
	{	
		std::cout << "the random value was true. or mabye it was uninitialised\n";
	}
	
	int i;
	double p,q;

	if ((p > q) || (i !=1))
	{
		//one of the random conditions was met
		std::cout << "one of the random conditions was met. Let's take a look:\n i = \t"<< i << "\n p = \t" << p << "\n q = \t" << q << "\n";
	}
	else
	{
		std::cout << "Neither condition was met\n";
	}
	return 0;
}
