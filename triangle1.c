#include<stdio.h>
#include<conio.h>
/* Author: Tanish Rai.
   Program: to find if it is possible to make a triangle.
*/
int main()
{
float a,b,c;
printf("\nEnter the three sides of the triangle:\n");
scanf("%f%f%f",&a,&b,&c);

if(a+b>c && a+c>b && b+c>a)
{
 printf("\n\t Triangle can be formed");
}
else
{
 printf("\n\t Triangle can not be formed");   
}
    return(0);
}