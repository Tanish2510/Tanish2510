#include<stdio.h>

#include<stdio.h>

void show(float ***p3,float ***c3,float ***m3,float ***b3,float ***e3,float ***total3,float ***percent3)
{
 printf("\n\t phy:%.2f",***p3);
 printf("\n\t chem:%.2f",***c3);
 printf("\n\t math:%.2f",***m3);
 printf("\n\t eng:%.2f",***e3);
 printf("\n\t bio:%.2f",***b3);
 printf("\n\t total marks:%.2f",***total3);
 printf("\n\t percentage:%.2f",***percent3);

}

void percentfun(float **p2,float **c2,float **m2,float **b2,float **e2,float **total2,float **percent2)
{
    **percent2=((**p2+**c2+**m2+**b2+**e2)*100.0)/250.0;
      show(&p2,&c2,&m2,&b2,&e2,&total2,&percent2);
}

void totalfun(float **p2,float **c2,float **m2,float **b2,float **e2,float **total2)
{
    **total2=**p2+**c2+**m2+**b2+**e2;
}

void getvalue(float *p1,float *c1,float *m1,float *b1,float *e1,float *total1,float *percent1)
{
    printf("\n Enter marks for Five Subjects\n :");
    scanf("%f%f%f%f%f",p1,c1,m1,b1,e1);
    totalfun(&p1,&c1,&m1,&b1,&e1,&total1);
    percentfun(&p1,&c1,&m1,&b1,&e1,&total1,&percent1);
}

int main()
{
 float e,p,c,m,b,total,percent;

 getvalue(&p,&c,&m,&b,&e,&total,&percent); 
return(0);
}