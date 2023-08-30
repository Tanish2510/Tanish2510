#include<stdio.h>
#include<conio.h>
/* get four numbers and display the largest one
*/
int main()
{   
   int a,b,c,d;
   printf("\n enter four numbers");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if(a>=b)
   { 
     if(a>=c)
     {
        if(a>=d)
        {
            printf("a is largest: %d",a);
        }
        else // a>=d
        {
            printf("d is largest: %d",d);
        }
     }
   }
   else //a>=b
   {
       if(b>=c) 
       {
        if(b>=d)
        {
            printf("b is the largest: %d",b);
        }
        else // b>=d
        {
            printf("d is the largest: %d",d);
        }
       }
   }
       else // c>=b
       {
            if(c>=d)
            {
                printf("c is the largest: %d",c);
            }
            else // c>=d
            {
                printf("d is the largest: %d",d);
            }
       }    


// GOOD!!

return(0);
}