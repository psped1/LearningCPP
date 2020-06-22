/*
* Exercise 2.4
*
* This looks like we're doing some matrix stuff
*
*/
#include<iostream>

int main(int argc, char* argv[])
{
	double u[3] = { 1.0, 2.0, 3.0};
	double v[3] = {6.0, 5.0, 4.0};
	double A[3][3] ={{1.0, 5.0, 4.0},
					 {7.0, 1.0, 2.0},
					 {0.0, 0.0, 1.0}};
	double B[3][3] ={{-2.0, 0.0, 1.0},
					 { 1.0, 0.0, 0.0},
					 { 4.0, 1.0, 0.0}};
	double w[3];
	for (int i=0; i<3; i++)
	{
		w[i] = u[i] - 3.0*v[i];
	}

	//Begin the exercise from here
//x
	double x[3];
	for (int i=0; i<3; i++)
	{	x[i] = u[i] - v[i];  }
//y
	double y[3];
	for (int i=0; i<3; i++)
	{
		y[i] = 0; //initialise the sum

		for (int j=0; j<3; j++)
		{
			y[i] += (A[i][j] * u[j]);
		}
	}

//z
	double z[3];
	for (int i=0; i<3; i++)
	{
		z[i] = y[i] - v[i];
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
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
		//I think i did something wrong
		}
	}






	//Print output
	std::cout << "Printing the variables:\n";

	//u
	std::cout << "\nu = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << u[i] << "\t";}

	//v
	std::cout << "\nv = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << v[i] << "\t";}

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

	//w
	std::cout << "\n\nw = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << w[i] << "\t";}

	//x
	std::cout << "\n\nx = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << x[i] << "\t";}

	//y
	std::cout << "\n\ny = \n";
	for(int i = 0; i < 3; i++)
	{std::cout << y[i] << "\t";}

	return 0;
}
