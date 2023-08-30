#include<stdio.h>
#include<conio.h>
/* Author: Tanish Rai.
   Program: To assign reversed value of a number to a variable.
*/
int main()
{
    int val,y,bk,rev;

    printf("\n Enter a multi digit number :");
    scanf("%d",&val);

    bk=val;
    while(bk!=0)
    {
        y=bk%10;
        bk/=10;
        printf("\n%d",y);
    }

    bk=val;
    rev=0;
    do
    {
        y=bk%10;
        bk/=10;
        rev=rev*10+y;
    } while (bk!=0);

    printf("\n Reverse of %d is %d",val,rev);
    
    return(0);
}