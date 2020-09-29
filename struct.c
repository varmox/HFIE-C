#include <stdio.h>

typedef struct rectangle {
	int width;
	int length;
} rectangle;

typedef struct postition
{

	int x;
	int y;	
} postition;



typedef struct buildignPlan
{
	rectangle rectangle;
	postition postition;

} buildignPlan;


int main ()
{
	rectangle myRectangle = {100,500};

	printf("Length %d width %d\n",myRectangle.length, myRectangle.width);

	buildignPlan myHouse = {"Yannick Gerber", {5,10}}

	

}