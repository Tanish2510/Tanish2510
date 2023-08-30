#include<stdio.h>

void calcarea(float *r1,float *a1)
{
    *a1=3.14* *r1* *r1;
}

void calccircum(float *r1,float *s1)
{
    *s1=2*3.14* *r1;
}

void getvalue(float *r1)
{
    printf("\n Enter Radius :");
    scanf("%f",r1);
}

int main()
{
   float r,a,s ;
   
   getvalue(&r);
   calccircum(&r,&s);
   calcarea(&r,&a);
     
   printf("\n\t Radius : %.2f",r);
   printf("\n\t Circumference : %.2f",s);
   printf("\n\t Area : %.2f",a);

    return(0);
}