#include<stdio.h>
#include<conio.h>
/* program: to get marks obtained by student in five subjects.
   formulae: percentage = (total/250)*100
*/
int main()
{
 float e,p,c,m,b,total,percent;

  printf("enter marks of each of the five subjects\n\t");
  scanf("%f%f%f%f%f",&e,&p,&c,&m,&b);

  total= e+p+c+m+b;

   printf("\n\t phy:%.2f",p);
   printf("\n\t chem:%.2f",c);
   printf("\n\t math:%.2f",m);
   printf("\n\t eng:%.2f",e);
   printf("\n\t bio:%.2f",b);
   printf("\n\t total marks:%.2f",total);

  percent=(total*100.0)/250.0;
   printf("\n\t percentage:%.2f",percent);
 
 return(0);

}