#include<stdio.h>
#include<conio.h>
/* Program : To find prime factors of the given number and their power.
*/
int main()
{
 int pow,value,bk,x;

 printf("\n\t Enter a number:");
 scanf("%d",&value);

 for(x=2,pow=0,bk=value; bk!=1; )
 {
  if(bk%x==0)
  {
     bk/=x;
     pow++;
   if(bk==1)
   {
     printf("\n\t %d to power %d",x,pow);
   } 
  }
  else //bk%x==0
  {
    if(pow!=0)
    { printf("\n\t %d to power %d",x,pow);   
      pow+0;
    }
     x++;
  }   
 }

 return(0);   
}