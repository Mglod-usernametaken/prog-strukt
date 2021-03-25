#include <stdio.h>
//#include <ctype.h>
/*
alternatywne sprawdzenie znakow i potrzebny header umieszczone jako komentarze
*/
int main()
{
pierwszeslowo();

return 0;
}
int pierwszeslowo(void)
{
    char tab[100];
    int i = 0;
    while (1)
    {
        tab[i] = getchar();
        if (tab[i]==0x20)
        //if (isspace(tab[i]))
        {

            tab[i]= '\0';
            break;
        }
    }

return 0;
}
