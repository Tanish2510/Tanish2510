#include<stdio.h>
#include<conio.h>
#include"random.h"
#include"task1.h"

int main()
{
    const int N=10;
    int ar[N];
    int x,sm;

    randomize();
    task_1_A(ar,N);
    task_1_B(ar,N);
    task_1_C(ar,N);
    task_1_D(ar,N);
    task_1_F(ar,N);
    task_1_H(ar,N);
    task_1_I(ar,N);
    task_1_J(ar,N);
    task_1_K(ar,N);
    task_1_G(ar,N);
    task_1_L(ar,N);
}