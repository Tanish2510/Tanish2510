#include<stdio.h>
#include<conio.h>
/* Program : To find factors of the given number.
*/
int main()
{
    int num,x;
    x=1;

    printf("\n\t Enter a number:\t");
    scanf("%d",&num);

    printf("\n\t Factors of the given number are:\n/t");

    while(x<=num)
    {
        if(num%x==0)
        {
            printf("\n\t %d\n",x);
        }
        x=x+1;
    }

    return(0);
}