#include<stdio.h>
#include<conio.h>
/* Program : To find if the number is perfect.
*/
int main()
{
    int num,x,sum;
    sum=0;
    x=1;

    printf("\n\t Enter a number: \t");
    scanf("%d",&num);
    while(x<num)
    {
        if(num%x==0)
        {
            sum=sum+x;
        }
        x=x+1;
    }
    if(sum==num)
    {
        printf("\n\t%d is a perfect number\n",num);
    }
    else //sum==num
    {
        printf("\n\t%d is not a perfect number\n",num);
    }





    return(0);
}