#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;

	std::cout << "x\t" << x << "\n";
	std::cout << "x\t" << (x = 4) << "\n";
	return 0;
}
