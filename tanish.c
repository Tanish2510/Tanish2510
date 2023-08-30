#include<stdio.h>
#include<conio.h>
/* Program:To deterine a leap year.
*/
int main()
{
    int year;
    printf("\n Enter the year:\n");
    scanf("%d",&year);

    if(year%400==0||year%100!=0&&year%4==0)
    {
        printf("\n it is a leap year");
    }
    else
    printf("\n not a leap year");
    
    return(0);
}