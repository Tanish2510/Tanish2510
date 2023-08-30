#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char str[20]="1234.5678";
    int x;
    long l;
    double d;

    x=atoi(str);
    printf("\n x: %d  str: %s",x,str);

    l=atol(str);
    printf("\n l: %ld str: %s",l,str);

    d=atof(str);
    printf("\n d: %lf str: %s",d,str);

    x=4768;
    sprintf(str,"%d",x); //itoa(x,str,10);
    printf("\n x: %d  str: %s",x,str);

    l=23232323;
    sprintf(str,"%ld",l); //ltoa(i,str,10);
    printf("\n l: %ld str: %s",l,str);

    d=23234.5656;
    sprintf(str,"%lf",d);
    printf("\n d: %lf str: %s",d,str);

    return(0);
}