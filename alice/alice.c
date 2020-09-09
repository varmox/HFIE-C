#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <assert.h>


uint32_t histogramm[256];

int main()
{
	FILE* f = NULL;
	_set_errno(0);
	errno_t err = fopen_s(&f, "alice.txt", "r");
	
	

	if (err != 0)
	{
		printf("the error %i occured", err);
		return 1;
	}

	assert(f != NULL);
	int ch = getc(f);

	while (ch > EOF)
	{
		ch = getc(f);
		if (ch != EOF)
		{
			histogramm[ch]++;
		}

	}
	
	
	fclose(f);
	uint16_t j = 0;
	for (; j < 256; j++)
	{
		printf("vorkommen des Zeichens %c = %i\n", j, histogramm[j]);
	}
}