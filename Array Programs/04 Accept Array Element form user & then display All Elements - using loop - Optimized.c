#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Values[5] = {0};
    for(i = 0;i <5; i++)
    {
        printf("\n Enter Element No %d = ",(i+1));
        scanf("%d",&Values[i]);
    }
    getch();
    system("cls");

    printf("\n\n Element in array are = \n\n");

    for(i=0;i<5;i++)
    {
        printf("\n Value of %d Element = %d", (i+1),Values[i]);
    }
    getch();
    return 0;
}

