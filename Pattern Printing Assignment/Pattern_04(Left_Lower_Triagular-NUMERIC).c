#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,x=0;

    printf("\nEnter value for Pattern");
    scanf("%d",&x);

    printf("\n==========Pattern=========\n\n");

    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i>=j)
            {
                printf("%3d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n==========Pattern=========\n\n");

    getch();
    return 0;
}
