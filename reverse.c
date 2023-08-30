#include<stdio.h>
#include<conio.h>
/* Author: Tanish Rai.
   Program: to determine the reverse of a multi digit number.
*/
int main()
{
  int val,y,bk;

  printf("\n\t Enter any number :\t");
  scanf("%d",&val);
  bk=val;

  while(bk!=0)
  {
     y=bk%10;
     bk/=10;
     printf("\n%d",y);
  }
  
    return(0);
}