#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int i = 5, j = 2;
	double k;

	k = i / j;
	std::cout << "Naive approach:" << k << "\n";
	
	k = ((double)(i)) / ((double)(j));	
	std::cout << "With casting: " << k << "\n";

	return 0;
}
