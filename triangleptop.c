#include<stdio.h>

void show(int ***a3,int ***b3,int ***c3)
{
    printf("\n 1st Angle:%d",***a3);
    printf("\n 2st Angle:%d",***b3);
    printf("\n 3st Angle:%d",***c3);
}

void calculate(int **a2,int **b2,int **c2)
{
    **c2=180-(**a2+**b2);
    show(&a2,&b2,&c2);
}

void getvalue(int *a1,int *b1,int *c1)
{
    printf("\n\t Enter Two Known Angles of a Triangle :\n ");
    scanf("%d%d",a1,b1);
    calculate(&a1,&b1,&c1);
}

int main()
{
    int a,b,c;

    getvalue(&a,&b,&c);
    
    return(0);
}