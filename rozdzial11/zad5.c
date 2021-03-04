#include <stdio.h>
#include <string.h>
#define ROZMIAR 10
int main()
{
char tablica[ROZMIAR] = "stosiedem.";
printf("%d", zawiera(tablica, 'm'));

return 0;
}

int zawiera(char * tab, int znak)
{

//printf("%c\n",znak);
int i;
int flaga=0;
for (i=0;i<ROZMIAR;i++)
{
    if (tab[i] == (char)znak)
    {
        flaga = 1;
        
    }
    else
        continue;
}
//printf("%x",flaga);
return flaga;
}
