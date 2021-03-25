#include <stdio.h>


int sum(int *x, int *y)
{
	return (*x + *y);
	
}


int main()
{
int x = 5,y = 4;

printf ("%d \n",sum(&x,&y));

return 0;	
}
