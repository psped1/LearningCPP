#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int array1[2];
	double array2[2][3];
std::cout << "Uninitialised\nArray1: " << array1[0] << "\n" << array1[1] << "\n";

std::cout << "Uninitialised\nArray2: " << array2[0][0]  << array2[0][1]  << array2[0][2]  << array2[1][0]  << array2[1][1]  << array2[1][2]<< "\n" ;

	array1[0] = 1;
	array1[1] = 10;
std::cout << "Initialised: element-wise\nArray1: "<< array1[0] << array1[1] << "\n";

	array1[1]++;
std::cout << "Incremented\nArray1: "<< array1[0] << array1[1] << "\n";

	array2[0][0]=1.0;
	array2[0][1]=1.4;
	array2[0][2]=1.9;

	array2[1][0]=2.0;
	array2[1][1]=2.2;
	array2[1][2]=2.9;
std::cout << "Initialised\nArray2: "  << array2[0][0]  << array2[0][1]  << array2[0][2]  << array2[1][0]  << array2[1][1]  << array2[1][2]<< "\n"; 

	std::cout << "hello" << "\n";

	return 0;
}
