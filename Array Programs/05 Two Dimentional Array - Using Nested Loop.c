#include<stdio.h>
#include<conio.h>
int main()
{
    int r = 0,c = 0,TDA [4][3] = {{5,6,7},{6,5,4},{45,76,34},{23,54,67}};

    for(r = 0; r < 4;r++)
    {
        for(c = 0;c < 4;c++);
        {
            printf("\n Values of element [%d][%d] = %d",r,c,TDA[r][c]);
        }
        printf("\n");
    }
    getch();
    return 0;
}



