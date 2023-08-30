#include<stdio.h>
#include<conio.h>
/* Program: To determine the type of triangle.
*/
int main()
{ 
    float a,b,c;
    printf("enter sides of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==b&&b==c)
    {
      printf("\n triangle is equilateral");
    }
    else //a==b&&b==c
    {
        if(a==b||b==c||a==c)
        {
          printf("\ntriangle is isoceles");
        }
        else //a==b||b==c||a==c
        {
            printf("\ntriangle is scalene");
        }
    }
    return(0);
}