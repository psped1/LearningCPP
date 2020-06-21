#include <iostream>

int main(int argc, char* argv[])
{
	double p, q, x, y;
	
	int i;
	std::cout << "p = " << p << "\n";
	std::cout << "q = " << q << "\n";
	std::cout << "x = " << x << "\n";
	std::cout << "y = " << y << "\n";
	std::cout << "i = " << i << "\n";

	//Ex 1
	x = 1.0;
	if ( (p >= q) || (i != 10))
	{
		x = 5.0;
	}
	
	//Ex 2
	if ( (y >= q) && (i == 20) )
	{
		x = 5.1;
	}
	else
	{
		x = p;
	}
	
	//Ex 3
	if( p > q )
	{
		x = 0;
	}
	else if( (p <= q) && (i == 10) )
	{
		x = 1;
	}
	else
	{
		x = 2;
	}


	std::cout << "after running the program:\n";
	std::cout << "p = " << p << "\n";
	std::cout << "q = " << q << "\n";
	std::cout << "x = " << x << "\n";
	std::cout << "y = " << y << "\n";
	std::cout << "i = " << i << "\n";

	return 0;
}
