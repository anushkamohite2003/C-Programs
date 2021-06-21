#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';
    int No = 55;
    int size = 0;

    size = sizeof(No);

    printf("\n Size for integer No = %d, Size");

    printf("\n Size for character variable ch is = %d",sizeof (ch));

    printf("\n Size for float data type is %d",sizeof(float));

    printf("\n Size for double Data type is = %d",sizeof (double));

    getch();
    return 0;
}

