#include<stdio.h>
#include<conio.h>

void show(float ***p3,float ***r3,float ***t3,float ***si3)
{
    printf("\n P  :%G",***p3);
    printf("\n R  :%G",***r3);
    printf("\n T  :%G",***t3);
    printf("\n SI :%G",***si3);
}

void calculate(float **p2,float **r2,float **t2,float **si2)
{
    **si2 = **p2 * **r2 * **t2 / 100;
    show(&p2,&r2,&t2,&si2); 
}

void getvalue(float *p1,float *r1,float *t1,float *si1)
{
    printf("\n\t Enter Values For P, R, and T\t");
    scanf("%f%f%f",p1,r1,t1);
    calculate(&p1,&r1,&t1,&si1);
}     

int main()
{
    float p,r,t,si;
   
    getvalue(&p,&r,&t,&si);
    
    return 0;
}