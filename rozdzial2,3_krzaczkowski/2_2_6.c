#include <stdio.h>

int iksdoigrek(int x, int y)
{
	int wynik = x, i;
	for (i=0;i<y-1;i++)
	{
		wynik = wynik * x;
	}
	if (y ==0)
		wynik = 1;
	return wynik;
}


int main()
{
printf ("%d\n", iksdoigrek(7,8));

return 0;	
}
