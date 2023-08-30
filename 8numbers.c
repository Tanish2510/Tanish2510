#include<stdio.h>
#include<conio.h>
/* Program: Choose the greatest no. among given 8,
*/
int main()
{
    float a,b,c,d,e,f,g,h;
    printf("\nEnter 8 numbers \n");
    scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
    int mx;
    mx=a;
    if(b>mx)
     mx=b;
    if(c>mx)
     mx=c;
    if(d>mx)
     mx=d;
    if(e>mx)
     mx=e;
    if(f>mx)
     mx=f;
    if(g>mx)
     mx=g;
    if(h>mx)
     mx=h;
     printf("\n max value: %d",mx);
     
    return(0);
}