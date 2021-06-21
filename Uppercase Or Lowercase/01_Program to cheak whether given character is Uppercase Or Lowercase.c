#include<stdio.h>
#include<conio.h>
int main()
{

     char ch = '\0';

     printf("\n Enter a Character = ");
     ch = getche();

     if((ch > 65 ) && (ch < 90))
     {
         printf("\n\n Given Character is Upper case!!");
     }
     else
     {
         printf("\n\n Given Character is Lower case !!");
     }

     getch();
     return 0;
}




