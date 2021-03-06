/*
Write code that declares two vectors as arrays of double precision floating point numbers of length 3 and assigns values to each of the entries. Extend this code so that it calculates the scalar (dot) product of these vectors and prints it to screen. Finally, extend the code so that it prints the Euclidean norm of both vectors to screen.

[See Section A.1.2. for a definition of the scalar product, and Sect. A.1.5 fo a definition of the Euclidan norm of a vector.]
*/
#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	double vector1[3] = {1, 2, 3};
	double vector2[3] = {4, 5, 6};

	std::cout << "Our vectors are: \n" << "Vector 1 = ("
	<< vector1[0] << ", " << vector1[1] << ", " << vector1[2]
	<< ")\n";
	std::cout << "Vector 2 = (" << vector2[0] << ", " <<
	vector2[1] << ", " << vector2[2] << ")\n";

	double dotProduct;
	double euclideanNorm1, euclideanNorm2;

	dotProduct = vector1[0] * vector2[0];
	dotProduct += (vector1[1] * vector2[1]);
	dotProduct += (vector1[2] * vector2[2]);

	std::cout << "The dot product of these is " << dotProduct
	<< "\n";
	
	double squaresAccumulator = 0;
	squaresAccumulator = + pow(vector1[0],2)   + pow(vector1[1],2)   + pow(vector1[2],2); 
	euclideanNorm1 = sqrt(squaresAccumulator);
	squaresAccumulator = + pow(vector2[0],2)   + pow(vector2[1],2)   + pow(vector2[2],2);
	euclideanNorm2 = sqrt(squaresAccumulator);

	std::cout << "The Euclidean norm of vector 1 is " << euclideanNorm1 << "\n";
	std::cout << "The Euclidean norm of vector 2 is " << euclideanNorm2 << "\n";
	return 0;
}
