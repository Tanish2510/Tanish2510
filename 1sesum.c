#include<stdio.h>
#include<conio.h>
/* Program : To find sum of the given number till 1.
*/
int main()
{
    int n,x,sum;
    sum=0;
    x=1;
    
    printf("\n\t Enter a positve number:\n\t");
    scanf("%d",&n);
    
    printf("\n\t Sum of numbers from 1 to %d is:\n\t",n);
    while(x<=n)
    {
        sum=sum+x;
        x=x+1;
    }
    printf("\n\t Sum = %d",sum);
    
    return(0);
}