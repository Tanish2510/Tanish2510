#include<stdio.h>
#include<conio.h>
/*To create simple interest calculator using pointers.*/

void show(float *p1,float *r1,float *t1,float *si1)
{
    printf("\n P  :%G",*p1);
    printf("\n R  :%G",*r1);
    printf("\n T  :%G",*t1);
    printf("\n SI :%G",*si1);
}

void calculate(float *p1,float *r1,float *t1,float *si1)
{
    *si1=*p1 * *r1 * *t1 / 100; 
}

void getvalue(float *p1,float *r1,float *t1)
{
    printf("\n\t Enter Values For P, R, and T\t");
    scanf("%f%f%f",p1,r1,t1);
}     

int main()
{
    float p,r,t,si;
   
    getvalue(&p,&r,&t);
    
    calculate(&p,&r,&t,&si);
    
    show(&p,&r,&t,&si);

    return 0;
}