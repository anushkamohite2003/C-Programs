#include<stdio.h>
#include<conio.h>
int main()
{

    char ch = '\0';
    ch = getche();

    if( (ch >= 'A') && (ch <= 'Z'))
    {

        printf("\n\n Given character is Upper case");
    }
    else
    {
        printf("\n\n Given character os Lower casa");
    }
    else
    {
        printf("\n\n Given character id Digit");
    }

    getch();
    return 0;
}
