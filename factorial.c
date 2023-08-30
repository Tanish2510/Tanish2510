#include<stdio.h>
#include<conio.h>
/* Program : To find factorial of the given number.
*/
int main()
{
    int n, fact;
    fact=1; //for the case when user enters 0.
    
    printf("\n\t Enter a number:\n\t");
    scanf("%d",&n);
    while(n>0)
    {
        fact=fact*n;
        n=n-1;
    }
      printf("\n\t Factorial: %d",fact);

return(0);

}