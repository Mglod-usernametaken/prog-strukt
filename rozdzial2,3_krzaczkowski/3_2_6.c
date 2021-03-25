#include <stdio.h>


int zamien(int n, int *w)
{

*w = n;

	return 0;
	
}


int main()
{
int n = 314, w;
zamien(n, &w);

printf ("%d \n",w);

return 0;	
}
