#include <stdio.h>
#include <string.h>

int main()
{
char tab[6] = "marcel";
char znak = 'm';
//znajdz(tab, znak);
printf("adres = %x", znajdz(tab,znak));

return 0;
}
int znajdz(char * tab, int znak)
{

//printf("%c\n",znak);
int i;
int* flaga = NULL;
for (i=0;i<6;i++)
{
    if (tab[i] == (char)znak)
    {
        flaga = &tab+i;
        break;
    }
    else
        flaga = NULL;
}
//printf("%x",flaga);
return flaga;
}
