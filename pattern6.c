#include<stdio.h>
#include<conio.h>
/* Program : To find patterm.
*/
int main()
{
 int r,c,t;

 for(r=5; r>=1; r--)
 {
    printf("\n");
    
    for(c=r; c<=5; c++)
    {
        printf("\t %d\t",c);
    }
 }   
 return(0);   
}