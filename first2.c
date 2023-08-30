#include<stdio.h>
// by tanish rai
/* problem: finding radius of circle and calculating its circumference and area.
formulae: Pir^2 and 2pir
*/
int main()
{
   float r,a,s ;
   printf("\n enter r");
   scanf("%f",&r);
   s=2*3.14*r;

   printf("\n\t radius : %.2f",r);
   printf("\n\t circumference : %.2f",s);
   a=3.14*r*r;
   printf("\n\t area : %.2f",a);

    return(0);
}