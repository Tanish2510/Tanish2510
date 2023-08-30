#include<stdio.h>
#include<conio.h>
/* Program: To determine the largest no. out of six given.
*/
int main()
{
    float a,b,c,d,e,f;
    
    printf("\n Enter six numbers:\n");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    int mx;
    mx = a;
    if(b>mx)
      mx = b;
    if(c>mx)
      mx=c;
    if(d>mx)
      mx=d;
    if(e>mx)
      mx=e;
    if(f>mx)
      mx=f;
      printf("\n max value:%d",mx);

    return(0);
}