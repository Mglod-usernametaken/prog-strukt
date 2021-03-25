#include <stdio.h>


int wyraz(int *x, int *y)
{
	int swap;
	if (*y<*x)
	{
		swap = *y;
		*y = *x;
		*x = swap;
	}
	return 0;
	
}


int main()
{
int x = 5,y = 3;

wyraz(&x,&y);

printf ("%d %d\n",x,y);

return 0;	
}
