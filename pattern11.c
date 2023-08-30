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
    for(t=1;t<=5-r;t++)
    printf("\t");
    for(c=r; c>=1; c--)
    {
        printf("\t %d\t",c%2);
    }
 }   
 return(0);   
}