#include<stdio.h>
#include<conio.h>

void show(float ***r3,float ***a3,float ***s3)
{
   printf("\n\t Radius : %.2f",***r3);
   printf("\n\t Circumference : %.2f",***s3);
   printf("\n\t Area : %.2f",***a3);

}

void calcmenu(float **r2,float **s2,float **a2)
{
    **s2=2*3.14* **r2;
    **a2=3.14* **r2* **r2;
    show(&r2,&s2,&a2);
}

void getvalue(float *r1,float *s1,float *a1)
{
    printf("\n Enter Radius :");
    scanf("%f",r1);
    calcmenu(&r1,&s1,&a1);
}

int main()
{
   float r,a,s ;
   
   getvalue(&r,&s,&a);

    return(0);
}