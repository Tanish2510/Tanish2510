#include<stdio.h>
#include<conio.h>
/* Program: To find the cyclic sum of the number.
*/
int main()
{
 int bk,val,sm,y;

 printf("\n\t Enter a number:");
 scanf("%d",&val);

 for(bk=val,sm=0; bk!=0; )
 {
    y=bk%10;
    bk/=10;
    sm+=y;

    if(bk==0 && sm>9) // >9 is to show that sum is in 2 digits still.
    {
        bk=sm;
        sm=0;
    }
 }
 printf("\n\t Digits: %d",sm);
 
 // OR:

 printf("\n\t Value: %d",val);
 y=val%9;
 if(val==0)
    printf("0");
 else if(y==0)
    printf("\n 9 ");
 else
    printf("\n %d ",y);      

 return(0);   
}