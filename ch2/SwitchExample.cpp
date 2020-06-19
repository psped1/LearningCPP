/*
* This is the examlple code from the book for the Switch control flow.
* The standard syntax for all switches I've encountered before goes:
* 
* switch(controlVar)
* {
*	case i:
*		//do stuff if controlVar == i
*	break;
*	case j
*		//do stuff if controlVar == j
*	break
*	default: //I think matlab used 'otherwise'
*		//have some default behaviour
* }
*
* However in the book they introduce a behaviour I handn't considered.
* What happens if you leave out the 'break' keyword?
* Well it seems the answer is it allows the execution of multiple cases.
*
* Here's an example:
*/
#include<iostream>

int main(int argc, char* argv[])
{
	int i = 1;
	
	switch(i)
	{
		case 1:
			std::cout << "i = 1\n";
		case 20:
			std::cout << "i = 1, or i = 20\n";
		break;
		default:
			std::cout << "i is not 1 or 20\n";
	}
	return 0;
}
