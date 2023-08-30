#include<stdio.h>
#include<conio.h>
/* Author: Tanish Rai
   program: calculating commision of a employe.
*/
int main()
{
    int sale;
    float high,low;
    printf("\nEnter sales amount");
    scanf("%d",&sale);

    high=(sale/100.0)*10;
    low=(sale/100.0)*7;

    if(sale>=10000)
    {
      printf("\n\tcomission given to empoye : %g",high);
    }
    else//sale>=10000
    {
        printf("\n\tcomission given to employe : %g",low);
    }
    
    return(0);

}   