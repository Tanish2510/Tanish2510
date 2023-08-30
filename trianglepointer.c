#include<stdio.h>

void getvalue(int *a1,int *b1)
{
    printf("\n\t Enter Two Known Angles of a Triangle :\n ");
    scanf("%d%d",a1,b1);
}

void calculate(int *a1,int *b1,int *c1)
{
    *c1=180-(*a1+*b1);
}

void show(int *a1,int *b1,int *c1)
{
    printf("\n 1st Angle:%d",*a1);
    printf("\n 2st Angle:%d",*b1);
    printf("\n 3st Angle:%d",*c1);
}
int main()
{
    int a,b,c;

     getvalue(&a,&b);
    
     calculate(&a,&b,&c);
    
     show(&a,&b,&c);
    
    return(0);
}