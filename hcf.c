#include<stdio.h>
#include<conio.h>
/* Author: Tanish Rai.
   Program: To find hcf of the given numbers:
*/
int main()
{
int num1,num2,x,hcf;

/* Getting two numbers for evaluation.*/
printf("\n\t Enter two numbers:");
scanf("%d%d",&num1,&num2);

for(x=1; x<=num1 || x<=num2; x++)
{
if(num1%x==0 && num2%x==0)
hcf=x;
}
printf("\n\t HCF of %d and %d is: %d",num1,num2,hcf);

return(0);   
}