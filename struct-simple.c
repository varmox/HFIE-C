#include <stdio.h>

//no typedef

struct rectangle {
	int width;
	int length;
};



int main ()
{
	struct rectangle myRectangle = {100,500}; //struct muesch schribe

	printf("Length %d width %d\n",myRectangle.length, myRectangle.width);

}

