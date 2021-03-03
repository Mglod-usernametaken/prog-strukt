#include <stdio.h>


int main()
{

int x = 20;
printf("Podaj %d dowolnych znakow z klawiatury: \n", x);
stoznakow(x);

return 0;
}

int stoznakow(int a)
{
    /*
TODO
pobieranie n znakow, z odstepami, tabulacja, nowa linia
>deklaracja n
>ustalenie \0
>petla for
>funkcja getchar
*/
    char tablica[a+1];
    int i=0, j=0;

        for(i=0;i<a;i++)
        {
            tablica[i]=getchar();
        }
        tablica [a] = '\0';
// poniwaz zadanie nie wymagalo wyswietlania pobrznych znakow,
// testujaca petle zostawiam jako komentarz.

/*
        for(j=0;j<a;j++)
            printf("%c", tablica[j]);
*/
    return 0;
}
