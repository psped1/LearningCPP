#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	//Do some stuff
	std::string city;
	city = "Oxford";

	std::cout << "String length = "<< city.length()<<"\n";
std::cout << "Third character = "<< city.at(2)<<"\n";
std::cout << "Third character = "<< city[2]<<"\n";
std::cout << city<<"\n";
std::cout << city.c_str()<<"\n";

	std::cout << "hello" << "\n";

	return 0;
}
