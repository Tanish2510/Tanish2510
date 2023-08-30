#include<stdio.h>
#include<conio.h>
/* Program : To find first number raise to the power of second number.
*/
int main()
{
    int power,base,result;
    result=1;

    printf("\n\t Enter a number for power:\t");
    scanf("%d",&power);
    printf("\n\t Power is:\t%d",power);

    printf("\n\t Enter a number for base:\t");
    scanf("%d",&base);
    printf("\n\t Base is:\t%d",base);

    while(power!=0)
    {
        result=result*base;
        power=power-1;
    }
    printf("\n\t Result= %d",result);

    return(0);
}