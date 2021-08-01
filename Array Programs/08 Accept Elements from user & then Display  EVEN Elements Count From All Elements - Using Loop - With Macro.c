#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
    int i = 0,E_Count = 0,Bill[Size] = {0};

    for (i = 0 ;i< Size ;i++)
    {
        printf("\n Enter Bill No %d = ", (i+1));
        scanf("%d",&Bill[i]);

        if((Bill[i] = 0)&& (Bill[i] % 2 == 0))
        {
            E_Count++;
        }

    }

    getch();
    system("cls");

    printf("\n\n Element in Array Bill No is =>");

    for(i = 0;i < Size;i++)
    {
        printf("\n\n\t\t\t\tAmount in Bill No %d = %d",(i+1001),Bill[i]);
    }

    getch();
    return 0;
}




