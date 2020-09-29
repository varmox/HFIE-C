#include <stdio.h>
#include <stdlib.h> //lib for malloc, calloc, ralloc

//dynamicly allocate memory on compiletime
//malloc() unitialized


int main()
{
	//variables
	int loop;
	int loopgeil;

	//malloc example
	// creates int array of 5 elements (1 int array 4 bytes)
	int *x = (int*) malloc(20 * sizeof(int));

	
	//then we can use the array -> 5th element can't be used
	x[0] = 50;
	x[1] = 100;
	x[3] = 150;
	x[4] = 200;


	//print the first element of the array
	printf("Array: %d\n", x[1]);

	//iterate through the array and print. we have to know num of element in the array :(
	for(loop = 0; loop < 5; loop++)
      printf("Array Loop: %d\n ", x[loop]);

  	//more sexier with sizeof
  	//irgendöppis gad hiä nunig
  	for (int loopgeil = 0; loopgeil < sizeof(x) / sizeof(int); ++loopgeil)
  		printf("Loop Geil:%d", x[loopgeil]);
		printf("Loop Geiler:\n");


}