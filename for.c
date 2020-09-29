#include <stdio.h>

//	general structure 

//	for (initializationStatement; testExpression; updateStatement)
//	{
//	    // statements inside the body of loop
//	}

int main()
{


	//simple for loop: increment i as long i is less than 10
	//i = 0 is starting value, i < 10 as long as under 10, i++ increment

	for (int i =0; i < 10; i++) 
	{
		printf("%d\n",i );
	}
	return 0;
}