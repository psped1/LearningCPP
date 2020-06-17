/*
* This is my simple implementation of the scalar vector produduct from chapter 2.4.1.
*
* psped1
* 2020/06/18
*/
#include<iostream>

int main(int argc, char* argv[])
{
	double vector1[3] = {0, 1, 2};
	double vector2[3] = {3, 4, 5};
	double scalarProduct = 0.0;

	for (int i = 0; i < 3; i++)
	{
		scalarProduct += (vector1[i] * vector2[i]);
	}

	std::cout << "The scalar product is " << scalarProduct << "\n";

	return 0;
}
