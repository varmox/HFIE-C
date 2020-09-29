#include <stdio.h>
#include <string.h>
#include <stdlib.h> //lib for malloc, calloc, ralloc

//malloc() unitialized



int main (void) {

	//malloc
	char *name = malloc(8* sizeof(char)); 	//provide 8 bytes (yannick = 7 + \0)
	if (name == NULL)						//check if char equals NULL, if yes print error and close programm
	{
		printf("ERROR: \n");
		return 1;
	}
	strcpy(name, "yannick");

	printf("My name: %s\n", name);

}