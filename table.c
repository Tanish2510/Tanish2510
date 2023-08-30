#include<stdio.h>
#include<conio.h>
/* Program : To find table of the given number.
*/
int main()
{
    int num,x;
    x=1;

    printf("\n\tEnter a number:\t");
    scanf("%d",&num);

    printf("\n\tTable of: \t%d",num);

    while(x<=10)
    {
        printf("\n\t%d x %d = %d\n",num,x,(num*x));
        x=x+1;
    }


    return(0);
}