#include<stdio.h>
#include<conio.h>
/* Program: To find if the numbrer entered by user is a pperfect square.
*/
int main()
{
 int num,sum,x,y;

 printf("\n\t Enter a number:\t");
 scanf("%d",&num);

 for(sum=0,x=1,y=0; sum<num; x+=2)
 {
    sum=sum+x;
    y++;
 }

 if(sum==num)
 {
    printf("\n\t Square root of %d is %d",num,y);
    printf("\n\t %d is a perfect square",num);
 }
 else // sum==num
 {
    printf("\n\t %d is a NOT perfect square",num);
 }
  
 return(0);

}