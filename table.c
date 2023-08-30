#include<stdio.h>
#include<conio.h>
/* Program : To find table from 1 to 10.
*/
int main()
{
 int r,c,t;

 for(r=1; r<=10; r++)
 {
    printf("\n\t Table of %d \n",r);
    for(c=1; c<=10; c++)
    {
        t=r*c;
        printf("\n\t %d X %d = %d\n",r,c,t);
    }
 }   
 return(0);   
}