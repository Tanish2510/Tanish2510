#include<stdio.h>

void getvalue(float *p1,float *c1,float *m1,float *b1,float *e1)
{
    printf("\n Enter marks for Five Subjects\n :");
    scanf("%f%f%f%f%f",p1,c1,m1,b1,e1);
}

void totalfun(float *p1,float *c1,float *m1,float *b1,float *e1,float *total1)
{
    *total1=*p1+*c1+*m1+*b1+*e1;
}

void percentfun(float *p1,float *c1,float *m1,float *b1,float *e1,float *total1,float *percent1)
{
    *percent1=((*p1+*c1+*m1+*b1+*e1)*100.0)/250.0;
}

void show(float *p1,float *c1,float *m1,float *b1,float *e1,float *total1,float *percent1)
{
 printf("\n\t phy:%.2f",*p1);
 printf("\n\t chem:%.2f",*c1);
 printf("\n\t math:%.2f",*m1);
 printf("\n\t eng:%.2f",*e1);
 printf("\n\t bio:%.2f",*b1);
 printf("\n\t total marks:%.2f",*total1);
 printf("\n\t percentage:%.2f",*percent1);

}

int main()
{

float e,p,c,m,b,total,percent;

 getvalue(&p,&c,&m,&b,&e);
 
 totalfun(&p,&c,&m,&b,&e,&total);
 
 percentfun(&p,&c,&m,&b,&e,&total,&percent);
 
 show(&p,&c,&m,&b,&e,&total,&percent);
 
return(0);
}