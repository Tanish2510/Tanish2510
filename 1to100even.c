#include<stdio.h>
#include<conio.h>
/* Program : To find all the even no. between 1 and 100.
*/
int main()
{
    int e;
    printf("\n\t Even numbers between 1 and 100\n\t");
    
    printf("\n\t In ascending order:\n\t");
    e=2;
    while(e<=100)
    {
        printf("\n\t %d",e);
        e=e+2;
    }

    printf("\n\t In descending order:\n\t");
    e=100;
    while(e>=1)
    {
        printf("\n\t %d",e);
        e=e-2;
    }
 
    return(0);
}