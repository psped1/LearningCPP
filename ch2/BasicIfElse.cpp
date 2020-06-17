#include <iostream>

int main(int argc, char* argv[])
{
	float x = -0.2;

	if (x < 0.0)
	{
		std::cout << "x is negative, reset to 0.0\n";
		x = 0.0;
	}
	else
	{
		std::cout << "x is already: " << x << "\n";
	}



	return 0;
}
