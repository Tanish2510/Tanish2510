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
    for(t=1;t<=r-1;t++)
    printf("\t");
    for(c=5; c>=r; c--)
    {
        printf("\t %d\t",c);
    }
 }   
 return(0);   
}