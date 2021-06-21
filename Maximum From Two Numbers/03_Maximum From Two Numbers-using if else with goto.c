#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1 = 0,Num2 = 0;

    printf("\n Enter 2 Integer Number To find Max from then ");
    scanf("%d%d",&Num1,&Num2);

    if(Num1 == Num2)
    {
        printf("\n Both Numbers are Equl");
        printf("\n\n For Comparison there should be 2 Different Numbers");
        printf("\n Enter 2 Numbers to find Max from there");
        goto Accept;
    }
    if(Num1 > Num2)
    {

        printf("\n Given 1st Number%d is Maximum");
    }
    else
    {
        printf("\n Given 2nd Number%d is Maximum");
    }
    getch();
    return 0;
}





