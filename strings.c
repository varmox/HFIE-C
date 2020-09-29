#include <stdio.h>

int main ()
{
	printf("Whats is your favorite food?:");
	char favFood[50];

	scanf("%49s", favFood);
	printf("%s\n", favFood);



	int charCount = 0;

	while(favFood[charCount] != '\0')
	{
		charCount++;
	}

	printf("The character count is %d\n", charCount);

	return 0;
}