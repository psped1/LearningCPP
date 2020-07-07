/*
* Exercise 2.4
*
* This looks like we're doing some matrix stuff
*
*/
#include<iostream>

int main(int argc, char* argv[0])
{
	const double u[3][1] = { {1.0}, {2.0}, {3.0}};
	const double v[3][1] = {{6.0}, {5.0}, {4.0}};
	const double A[3][3] ={{1.0, 5.0, 0.0},
					 {7.0, 1.0, 2.0},
					 {0.0, 0.0, 1.0}};
	const double B[3][3] ={{-2.0, 0.0, 1.0},
					 { 1.0, 0.0, 0.0},
					 { 4.0, 1.0, 0.0}};
	double w[3][1];
	for (int i=0; i<3; i++)
	{
		w[i][0] = u[i][0] - 3.0*v[i][0];
	}

	//Begin the exercise from here
//x
	double x[3][1];
	for (int i=0; i<3; i++)
	{	x[i][0] = u[i][0] - v[i][0];  }
//y
	double y[3][1];
	for (int i=0; i<3; i++)
	{
		y[i][0] = 0; //initialise the sum

		for (int j=0; j<3; j++)
		{
			y[i][0] += (A[i][j] * u[j][0]);
		}
	}

//z
	double z[3][1];
	for (int i=0; i<3; i++)
	{
		z[i][0] = y[i][0] - v[i][0];
	}

//C
	double C[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			C[i][j] = 4*A[i][j] - 3*B[i][j];
		}
	}

//D
	double D[3][3];
	double accumulator = 0.0;

	for(int dRow = 0; dRow < 3; dRow++)
	{
		for(int dCol=0; dCol<3; dCol++)
		{
			for(int i=0; i<3; i++)
			{
				accumulator += A[dRow][i] * B[i][dCol];
			}
			D[dRow][dCol] = accumulator;
			accumulator = 0;
		}
	}

	//Print output
	std::cout << "Printing the variables:\n";

	//u
	std::cout << "\nu = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << u[i][0] << "\t";}

	//v
	std::cout << "\nv = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << v[i][0] << "\t";}

	//A
	std::cout << "\nA = \n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			std::cout << A[i][j] << "\t";
		}
		std::cout << "\n";
	}

	//B
	std::cout << "\nB = \n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			std::cout << B[i][j] << "\t";
		}
		std::cout << "\n";
	}
	
	std::cout << "\nHere are the calculated results:\n";

	//w
	std::cout << "\n\nw = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << w[i][0] << "\t";}

	//x
	std::cout << "\n\nx = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << x[i][0] << "\t";}

	//y
	std::cout << "\n\ny = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << y[i][0] << "\t";}

	//C
	std::cout << "\nC = \n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			std::cout << C[i][j] << "\t";
		}
		std::cout << "\n";
	}

	//D
	std::cout << "\nD = \n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			std::cout << D[i][j] << "\t";
		}
		std::cout << "\n";
	}
	return 0;
}
