#include <stdio.h>

int main()
{
    char pierwsza[3] = "aaa";
    char druga[10] = "bbbbbbbbbb";
    int x = 5, k=0;
    stringcopy(&pierwsza, &druga, x);

    for (k=0;k<10;k++)
        printf("%c", druga[k]);

return 0;
}
int stringcopy(char *str1,char *str2,int n)
{
    int i=0;
    for (i=0;i<n;i++)
   // while (str1+i!='\0')
    {
        if (i<rozmiar) //nie moge odczytac rozmiaru po pointerze, trzeba zrobic wykrywanie \0
            str2[i] = str1[i];
        //if (i>sizeof(str1))
        else
            str2[i] ='0';



    }
}
