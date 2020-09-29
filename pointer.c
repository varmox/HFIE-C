#include <stdio.h>

int main () 
{
	int myvariable = 50; //set variable datatype and size
	int *mypointer;		 //set datatype of pointer

	mypointer = &myvariable;	

	printf("Value: %i\n", myvariable);
	printf("Value Pointer: %i\n", *mypointer);

	*mypointer = 55;

	printf("Value: %i\n", myvariable);
	printf("Value Pointer: %i\n", *mypointer);

	myvariable++;

	printf("Value: %i\n", myvariable);
	printf("Value Pointer: %i\n", *mypointer);

	*mypointer = *mypointer + *mypointer;

	printf("Value: %i\n", myvariable);
	printf("Value Pointer: %i\n", *mypointer);
}