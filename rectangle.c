#include<stdio.h>
#include<conio.h>
/* Program: To determine wether areas of rectangle are same or not.
*/
int main()
{
 float l1,l2,b1,b2,ar1,ar2;

 printf("\n\t Enter length and width of first rectangle:\n");
 scanf("%f%f",&l1,&b1);

 printf("\n\t Enter length and width of second rectangle:\n");
 scanf("%f%f",&l2,&b2);

 ar1= l1*b1;
 ar2= l2*b2;
 printf("\n\t Area of both rectangle: \n\tarea1:%g \n\tarea2:%g",ar1,ar2);

 if(ar1==ar2)
 {
    printf("\n\t The areas are same");
 }
 else //ar1==ar2
 {
    if(ar1>ar2)
    {
        printf("\n\t Area of 1st is larger");
    }
    else //ar1>ar2
        printf("\n\t Area of 2nd is larger");
 }










    return(0);
}