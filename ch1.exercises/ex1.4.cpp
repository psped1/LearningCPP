/*
Write code that declares four 2 * 2 matricies - A,B,C,D - of floating point numbers and assigns values to the entries of A and B.
Let C = A + B, and D = A*B. Extend your code so that it calculates the entries of C and D, and then prints the entries of these matricies to the screen.
*/
#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	double A[2][2] = {{1, 2},{3, 4}};
	double B[2][2] = {{8, 7},{6, 5}};
	double C[2][2], D[2][2];

	std::cout << "Matrix A: \n";
	std::cout << A[0][0] << "\t" << A[0][1] << "\n" << A[1][0] << "\t" << A[1][1] << "\n";
	std::cout << "Matrix B: \n";
	std::cout << B[0][0] << "\t" << B[0][1] << "\n" << B[1][0] << "\t" << B[1][1] << "\n";
	
	// Calculate C
	std::cout << "Matrix C: \n";
	C[0][0] = A[0][0] + B[0][0];
	C[0][1] = A[0][1] + B[0][1];
	C[1][0] = A[1][0] + B[1][0]; 
	C[1][1] = A[1][1] + B[1][1];
	std::cout << C[0][0] << "\t" << C[0][1] << "\n" << C[1][0] << "\t" << C[1][1] << "\n";

	// Calculate D
	std::cout << "Matrix D: \n";
	D[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
	D[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
	D[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
	D[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
	std::cout << D[0][0] << "\t" << D[0][1] << "\n" << D[1][0] << "\t" << D[1][1] << "\n";
	return 0;
}
