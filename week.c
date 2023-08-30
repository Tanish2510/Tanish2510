#include<stdio.h>
#include<conio.h>
/* Program: To determine the day of the week.
*/
int main()
{
 int a;
 printf("\n\t Enter a number betweeen 1 and 7, both included :\n");
 scanf("%d",&a);

 if(a==1)
 {
   printf("\n\t MONDAY");
 }
 else // a==1
 {
    if(a==2)
    {
      printf("\n\t TUESDAY");
    }
    else // a==2
    {
       if(a==3)
       {
         printf("\n\t WEDNESDAY");
       }
       else // a==3
       {
        if(a==4)
        {
            printf("\n\t THURSDAY");
        }
        else // a==4
        {
            if(a==5)
            {
                printf("\n\t FRIDAY");
            }
            else // a==5
            {
                if(a==6)
                {
                    printf("\n\t SATURDAY");
                }
                else // a==6
                {
                    if(a==7)
                    {
                        printf("\n\t SUNDAY");
                    }
                    else // a==7
                    printf("\n\t ERROR");
                }
            }
        }
       }
    }
     
 }














    return(0);
}