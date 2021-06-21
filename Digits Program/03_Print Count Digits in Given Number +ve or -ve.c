#include<stdio.h>
#include<conio.h>
int main()
{

    int No = 0, Temp = 0, Cnt = 0;

    printf("\n Enter to Number To find NBo off Digits");
    scanf("%d",&No);

    if(No < 0)
    {

        Temp = -No;
    }
    else
    {
        Temp = No;
    }
    while(Temp > 0)
    {

        Temp = Temp / 10;
        Cnt++;
    }
    printf("\n Count of Digits in %d is = %d ,No",Cnt);

    getch();
    return 0;
}




