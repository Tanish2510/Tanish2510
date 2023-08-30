#include<stdio.h>
#include<conio.h>
/* Program: To find the simplified form of rational value.
*/
int main()
{
 int n,d,p,q,x; // x for running the loop.

 printf("\n\t Enter two numbers for numenator and deenominator: \n");
 scanf("%d%d",&n,&d);

 p=n;
 q=d;

 for(x=2; x<=p && x<=q; )
 {
    if(p%x==0 && q%x==0)
    {
        p/=x;
        q/=x;
    }
    else //p%x==0 && q%x==0
    {
        if(x==2)
        {
            x+=1;
        }
        else //x==2
        {
            x+=2;
        }
    }
 }
 printf("\n\t Simplified value of %d/%d is %d/%d ",n,d,p,q);

 return(0);   
}