#include<stdio.h>
#include<conio.h>
/* Program: To determine position of cordinates.
*/
int main()
{
    float x,y;
    printf("\n enter the value of x and Y :\n");
    scanf("%f%f",&x,&y);

    if(x==0&&y==0)
    {
     printf("\n point falls on origin");
    }
    else //x==0&&y==0
    {
        if(x==0&&y!=0)
        {
        printf("\npoint lies on y axis ");
        }
        else //x==0&&y!=0
        {
            if(x!=0&&y==0)
            {
              printf("\npoint lies on x axis");
            }
            
        }

    }
    if(x>0&&y>0)
    printf("\n lies in first ouad");
    if(x<0&&y>0)
    printf("\n lies in second ouad");
    if(x<0&&y<0)
    printf("\n lies in third ouad");
    if(x>0&&y<0) 
    printf("\n lies in fourth ouad");

    return(0);
}