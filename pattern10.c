#include<stdio.h>
#include<conio.h>
/* Program : To find patterm.
*/
int main()
{
 int r,c,t;

 for(r=1; r<=5; r++)
 {
    printf("\n");
    
    for(c=1; c<=5; c++)
    {
        printf("\t %d\t",r);
    }
 }   
 return(0);   
}