/*
* I should get in the habit of adding header comments. righ?
* 
* This is from chapter 2.3 the while statement
*
* I am unsure how WSL will handle the infinte loop we're inevitably going to write. so let's carry on and see :D
*
* psped1
* 16/6/2020
*/

#include <iostream>

int main(int argc, char* argv[])
{
	int a = 1;
	while ( a < 2000)
	{
		a *= 2;
		std::cout << a << "\n";
	}



	return 0;
}
