#include<stdio.h>
#include<conio.h>
/* Program: To find the table from 1 to 10.
*/
int main()
{
 int num,x,y;
 

 for(num=1; num<=10; num++)
 {
    printf("\n\t Table of %d\n",num);

    for(x=1; x<=10; x++)
    {
        y=num*x;
        printf("\n\t %d X %d = %d\n",num,x ,y);
    }
 }   
 
 return(0);   

}
