#include<stdio.h>
#include<conio.h>
/* Author: Tanish Rai.
   Program: To find wether number is multiple 3 or 5.
*/
int main()
{
    int a;

    printf("\n\t Enter a number:\n");
    scanf("%d",&a);

    if(a%3==0 && a%5==0)
    {
        printf("\n\t fizz buzz");

    }
    else //a%3==0&&a%5==0
    {
        if(a%3==0)
        {
            printf("\n\t fizz");
        }
        else //a%3==0
        {
            if(a%5==0)
            {
               printf("\n\t buzz");
            }
            else //a%5==0
               printf("\n\t%d",a);
        }
    }
    return(0);
}   