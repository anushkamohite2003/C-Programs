#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

#define Size 5
int main()
{
    int i = 0, Neg_Cnt = 0, Bill[Size] = {0};

    for(i = 0; i < Size;i++)
    {
        printf("\n Enter Bill No %d = ",(i+1));
        scanf("%d",&Bill[i]);

        if(Bill [i] < 0)
        {
            Neg_Cnt++;
        }
    }
    getch();
    printf("\n Negative Amounts count is = %d ",(i+1));

    getch();
    return 0;
}



