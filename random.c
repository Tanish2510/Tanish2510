#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include"random.h"
#include<stdio.h>

void randomize()
{
    time_t t;
    time(&t);
    srand(t);
}

int random(int x)
{
    return rand()%x;
}

void clrscr()
{
    system("cls");
}

void rndassign(int a[],int N)
{
    int x,val;
    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;

        a[x]=val;
    }
}

void show(int a[],int N)
{
    int x;
     printf("\n");
    for(x=0;x<N;x++)
     printf("%4d",a[x]);
}
