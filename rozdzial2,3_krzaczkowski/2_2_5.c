#include <stdio.h>

int dwadoen (int x)
{
	int wynik = 2, i;
	for (i = 0; i<(x-1); i++)
	{
		wynik = wynik * 2;	
	}
	return wynik;
}

int main()
{
printf ("%d\n", dwadoen(10));

return 0;	
}
