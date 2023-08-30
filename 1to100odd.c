#include<stdio.h>
#include<conio.h>
/* Program : To find all the odd no. between 1 and 100.
*/
int main()
{
    int o;
    printf("\n\t odd numbers between 1 and 100\n\t");
    
    printf("\n\t In ascending order:\n\t");
    o=1;
    while(o<=100)
    {
        printf("\n\t %d",o);
        o=o+2;
    }

    printf("\n\t In descending order:\n\t");
    o=99;
    while(o>=1)
    {
        printf("\n\t %d",o);
        o=o-2;
    }
    
    return(0);
}