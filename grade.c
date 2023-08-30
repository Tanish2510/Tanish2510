#include<stdio.h>
#include<conio.h>
/* Program: To find grade of a student.
*/
int main()
{
    int a,b,c,d,e,f,tot;
    float cent;
    
    printf("\n Enter marks :\n");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    
    tot=a+b+c+d+e+f;
    cent=(float)tot / 480 *100.0;
    
    printf("\n total marks: %d",tot);
    printf("\n percentage: %g",cent);

    if(cent>=90)
    {
      printf("\n A+ grade");
    }
    else //cent>=90
    {
        if(cent>=80)
        {
         printf("\nA grade");
        }
        else //cent>=80
        {
            if(cent>=70)
            {
             printf("\nB+ grade");
            }
            else //cent>=70
            {
                if(cent>=60)
                {
                 printf("\nB grade");
                }
                else //cent>=60
                {
                    if(cent>=50)
                    {
                        printf("\nC grade");
                    }
                    else //cent>=50
                    printf("\n FAIL");
        
                }
            }
        }

    }

    return(0);
}