#include<stdio.h>
#include<conio.h>
#include"random.h"

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

int main()
{
    const int N=10;
    int ar[N];
    int ar1[100];
    int x;

    randomize();
    rndassign(ar,N);
    show(ar,N);

    rndassign(ar1,100);
    show(ar1,100);

}