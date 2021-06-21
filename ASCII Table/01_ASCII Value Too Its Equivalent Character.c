#include<stdio.h>
#include<conio.h>
int main()
{
    int Val = 0;
    char ch = 'A';

    printf("\n Enter an ASCII Value To get Coressponding character = ");
    scanf("%d",&Val);

    ch = Val;

    Printf("\n\n Character for Given ASCII Value is = %C.",ch);

    getch();

    return 0;

}
