#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include"random.h"
#include<stdio.h>
#include"task1.h"
#include<math.h>

int task_1_A(int *ar,int N)
{
    int sm,x,val;

    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;
        *(ar+x)=val;
    }
    show(ar,N);
    sm=0;
    printf("\n");
    for(x=0;x<N;x++)
    {
        printf("%d+",*(ar+x));
        sm=sm+*(ar+x);
    }
    printf("\b=%d",sm);
    getch();

    return sm;

}

float task_1_B(int *ar,int N)
{
    int sm,x,val;
    float avg;

    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;
        *(ar+x)=val;
    }
    show(ar,N);
    sm=0;
    printf("\n");
    for(x=0;x<N;x++)
    {
        printf("%d+",*(ar+x));
        sm=sm+*(ar+x);
    }
    printf("\b=%d",sm);
    avg=sm*1.0/N;
    printf("\naverage=%G",avg);
    getch();

    return avg;

}


int task_1_C(int *ar,int N)
{
    int x,val,e;

    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;
        ar[x]=val;
    }
    show(ar,N);
    e=0;
    printf("\n");
    for(x=0;x<N;x++)
    {   
        if(*(ar+x)%2==0)
        {
          printf("%d+",*(ar+x));
          e=e+*(ar+x);
        }
       
    }
    printf("\b \nSum of even numbers =%d",e);
    
    getch();

    return e;
}

int task_1_D(int *ar,int N)
{
    int x,val,o;

    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;
        *(ar+x)=val;
    }
    show(ar,N);
    o=0;
    printf("\n");
    for(x=0;x<N;x++)
    {
        if(*(ar+x)%2!=0)
        {
          printf("%d+",*(ar+x));
          o=o+*(ar+x);
        }
       
    }
    printf("\b \nSum of odd numbers =%d",o);
    
    getch();

    return o;
}

int task_1_F(int *ar,int N)
{
    int sm,x,val,bk,y;

    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;
        *(ar+x)=val;
    }
    show(ar,N);
    printf("\n");
    for(x=0;x<N;x++)
    {
        bk=*(ar+x);
        sm=0;
        while(bk>0)
        {
            y=bk%10;
            sm=sm+y*y*y;
            bk/=10;
        }
        if(sm==*(ar+x))
        {
         printf("\n %d is a armstrong number",*(ar+x));
        }     
    }

    return 0;
}

float task_1_G(int *ar,int N)
{
    int x,val;
    float sum=0,mean,SD;

    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;
        *(ar+x)=val;
    }
    show(ar,N);
    printf("\n");

    for(x=0;x<N;x++)
    {
        sum+=*(ar+x);
        mean=sum/N;
    }

    sum=0.0;
    for(x=0;x<N;x++)
    {
        sum+=(*(ar+x)-mean)*(*(ar+x)-mean);
        SD=sqrt(sum/N);
    }
    printf("Mean: %G \n",mean);
    printf("Standard Deviation: %G",SD);
    return 0;
}


int task_1_H(int *ar,int N)
{
    int x,val,e;

    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;
        *(ar+x)=val;
    }
    show(ar,N);
    e=0;
    printf("\n");
    for(x=0;x<N;x++)
    {
        if(x%2!=0)
        {
          printf("%d+",*(ar+x));
          e=e+*(ar+x);
        }
       
    }
    printf("\b \nSum of even index numbers =%d",e);
    
    getch();

    return e;
}


int task_1_I(int *ar,int N)
{
    int x,val,e;

    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;
        *(ar+x)=val;
    }
    show(ar,N);
    e=0;
    printf("\n");
    for(x=0;x<N;x++)
    {
        if(x%2==0)
        {
          printf("%d+",*(ar+x));
          e=e+*(ar+x);
        }
       
    }
    printf("\b \nSum of odd index numbers =%d",e);
    
    getch();

    return e;
}

int task_1_J(int *ar,int N)
{
    int diff,E,O;
    E=task_1_C(ar,N);
    printf("\n Even sum: %d",E);
    O=task_1_D(ar,N);
    printf("\n Odd sum: %d",O);

    diff=E-O;
    printf("\n Difference : %d",diff);

    return diff;
}

int task_1_K(int *ar,int N)
{
    int diff,E,O;
    E=task_1_H(ar,N);
    printf("\n Even Index sum: %d",E);
    O=task_1_I(ar,N);
    printf("\n Odd Index sum: %d",O);

    diff=E-O;
    printf("\n Difference of Index : %d",diff);

    return diff;
}

int task_1_L(int *ar,int N)
{
    int x,val,mx;

    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;
        *(ar+x)=val;
    }
    show(ar,N);

    mx=ar[0];
    printf("\n");
    for(x=1;x<N;)
    {
        if(*(ar+x)>mx)
        {
            *(ar+x)=mx;
        }
        x++;
    }
    printf("\nMaximum value is: %d",mx);
 return mx;
}

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

