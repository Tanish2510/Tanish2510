#include<stdio.h>

void show(float ***c3,float ***f3)
{
    printf("\n Temp. in Celsius  :%G",***c3);
    printf("\n Temp. in Farenhiet:%G",***f3);

}

void conversion(float **c2,float **f2)
{
    **f2= (1.8* **c2) +32.0;

    show(&c2,&f2);
}

void getvalue(float *c1,float *f1)
{
    printf("\n Enter Temperature in Degree Celsius:");
    scanf("%f",c1);

    conversion(&c1,&f1);

}

int main()
{
    float c,f;
    getvalue(&c,&f);
    return(0);
}