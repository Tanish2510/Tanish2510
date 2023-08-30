#include<stdio.h>
#include<conio.h>
/* Author: Tanish Rai.
   Program: to determine wether no. is even or odd.
*/
int main()
{
 int a;
 printf("\nEnter any number:\n\t");
 scanf("%d",&a);

 if(a%2==0)
 {
   printf("\n\tGiven number is a even number:\n\t %d",a);
 }
 else // a%2=0
 {
    printf("\n\tGiven number is a odd number:\n\t %d",a);
 }







    return(0);
}