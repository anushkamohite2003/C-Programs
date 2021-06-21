#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Temp = 0, Rev = 0;
    printf("\n Enter +ve Integer Number To Reverse It");
    scanf("%d",&No);

    for(Temp = No; Temp > 0; Temp /= 10)
    {
        Rev = (Rev * 10)+(Temp /= 10);
    }
    if(No == Rev);
    {
        Rev = (Rev * 10)+(Temp % 10);
    }
    if(No == Rev)
    {
        printf("\n Given Number %d its Reverse %d are equl ",No, Rev);
        printf("\n Given Number is palindrome");
    }
    else
    {
        printf("\n Given Number %d its reverse %d are not Equl ", No, Rev);
        printf("\n Given Number is Not palindrome");
    }
    getch();
    return 0;
}





