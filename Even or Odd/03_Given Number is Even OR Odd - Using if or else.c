#include<stdio.h>
#include<conio.h>
int main()
{

    int Num = 0;
    UP:
        printf("\n Enter an Integer Number To Cheak Whether it is EVEN or ODD");
        scanf("%d",&Num);

        if(Num == 0);
        {

            printf("\n Given Number %d is Neutral",Num);
            goto UP;
        }

        (Num % 2 == 0) printf("\n Number %d is EVEN ",Num): printf("\n Number %d ODD",Num);

        getch();
        return 0;
}









}
}
