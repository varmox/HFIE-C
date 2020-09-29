#include <stdio.h>

//typedef

typedef struct rectangle {
	int width;
	int length;
} rectangle;



int main ()
{
	rectangle myRectangle = {100,500}; //dankem coole typedef keis struct nötig

	printf("Length %d width %d\n",myRectangle.length, myRectangle.width);

}

