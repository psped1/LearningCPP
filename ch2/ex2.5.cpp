/*
*
* Insert comment here
*
*/
#include<iostream>

int main(int argc, char* argv[])
{
	double det = 0.0;
	double A[2][2] = {{4,10},{1,1}};
	double invA[2][2];

	det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
	det = 1 / det;

	invA[0][0] = det * A[1][1];
	invA[0][1] = det * -1*A[0][1];
	invA[1][0] = det * -1*A[1][0];
	invA[1][1] = det * A[0][0];

	double identCheck[2][2];
	double accumulator = 0;
	for(int row=0; row<2; row++)
	{
		for(int col=0; col<2; col++)
		{
			for(int i=0; i<2; i++)
			{
				accumulator += invA[row][i] * A[i][col];
			}
		
			identCheck[row][col] = accumulator;
			accumulator = 0;
		}
	}
	
	//Now let's display all the matricies

	std::cout<<"\nMatrix A\n";
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			std::cout << A[i][j] << "\t";
		}
		std::cout << "\n";
	}
	
	std::cout<<"\nMatrix invA\n";
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			std::cout << invA[i][j] << "\t";
		}
		std::cout << "\n";
	}

	std::cout<<"\nMatrix check ident\n";
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			std::cout << identCheck[i][j] << "\t";
		}
		std::cout << "\n";
	}
			//Insert my problem solving here.
	return 0;
}

