/*
I want to record the number of cars that drive past my house each day for five consecutive days, and calculate the average of these numbers. Create an integer array to store these finve numbers, and then write code to calculate the average of these numbers. Execute you code using sample data 34, 58, 57, 32, 43. Verify that you get the correct answer of 44.8.
[Hint: read the material in Sect 1.4.4 on converting integers to double precision floating point numbers.]
*/

#include <iostream>
#include <cmath>
int main(int argc, char* argv[])
{
	int arrayOfCars[5];
	int i = 0, j = 0;
	double averageAccumulation = 0;

	std::cout << "Enter the number of cars on day " << ++i << "\n";
	std::cin >> arrayOfCars[j];
	averageAccumulation += ((double)arrayOfCars[j])/5;
	j++;
	
	std::cout << "Enter the number of cars on day " << ++i << "\n";
	std::cin >> arrayOfCars[j];
	averageAccumulation += ((double)arrayOfCars[j])/5;
	j++;

	std::cout << "Enter the number of cars on day " << ++i << "\n";
	std::cin >> arrayOfCars[j];
	averageAccumulation += ((double)arrayOfCars[j])/5;
	j++;

	std::cout << "Enter the number of cars on day " << ++i << "\n";
	std::cin >> arrayOfCars[j];
	averageAccumulation += ((double)arrayOfCars[j])/5;
	j++;

	std::cout << "Enter the number of cars on day " << ++i << "\n";
	std::cin >> arrayOfCars[j];
	averageAccumulation += ((double)arrayOfCars[j])/5;
	j++;

	std::cout << "The average number of cars is " << averageAccumulation << "\n";

	return 0;
}
