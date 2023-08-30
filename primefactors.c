#include<stdio.h>
#include<conio.h>
/* Program : To find prime factors of the given number.
*/
int main()
{
    int num,x,y,z;
    x=1;

    printf("\n\t Please enter the number:\t");
    scanf("%d",&num);

    printf("\n\t Prime factors of %d are: \n");
    /*
        num 20  x 1  y  z 0
    */

    while(x<=num)
    {
        z=0;
        if(num%x==0)
        {
            y=1;
        }
        while(y<=x)
        {
          if(x%y==0)
          {
            z=z+1;
          }
          y=y+1;
        }
        if(z==2)
        {
            printf("\n\t%d\n",x);
        }
        x=x+1;
    }
    
    return(0);
}