#include <stdio.h>


int wyraz(int n)
{
	if(n==0)
		return 1;
	else
	{
		return 2* wyraz(n-1)+5;
	}
	
}


int main()
{
printf ("%d\n", wyraz(20));

return 0;	
}
