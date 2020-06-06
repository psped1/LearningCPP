#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	double x = 1.0, y = 2.0, z;
	z = x/y;
	std::cout << "Division: " << z << "\n";
	z = x*y;
	std::cout << "Multiplication: " << z << "\n";
	z = sqrt(y);
	std::cout << "Square root: " << z << "\n";
	z = exp(x);
	std::cout << "Exponential function: " << z << "\n";
	z = pow(x,y);
	std::cout << "Power of: " << z << "\n";
	z = M_PI;
	std::cout << "Pi: " << z << "\n";
	return 0;
}
