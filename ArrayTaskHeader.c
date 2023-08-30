#include<stdio.h>
#include<conio.h>
#include"random.h"


void rndAssign(int a[],int N)
{
    int x,val;
    for(x=0;x<N;x++)
    {
        val= random(N*2)+1;

        a[x]=val;
    }
    return;
}

void uniqueRndAssign(int ar[],int N)
{
    int x,y,val;
    for(x=0;x<N;)
    {
      val=random(N*2)+1;

      for(y=0;y<x;y++)
      {
         if(ar[y]==val)
            break;
      }

      if(ar[y]!=val)
      {
         ar[x]==val;
         x++;
      }
    }
    show(ar,N);
    return;
} 

int linearSearch(int A[],int N, int val)
{
   return 0;
}

void linearSortAsc(int ar[],int N)
{   
     int f,c,t;

     rndassign(ar,N);
     show(ar,N);

     for(f=0;f<N-1;f++)
     {
        for(c=f+1;c<N;c++)
        {
          if(ar[f]>ar[c])
          {
             t=ar[f];
             ar[f]=ar[c];
             ar[c]=t;
          }
        }
     }
     show(ar,N);
     return;
}

void linearSortDesc(int ar[],int N)
{
   int f,c,t;

   rndassign(ar,N);
   show(ar,N);

   for(f=0;f<N-1;f++)
     {
        for(c=f+1;c<N;c++)
        {
          if(ar[f]<ar[c])
          {
             t=ar[f];
             ar[f]=ar[c];
             ar[c]=t;
          }
        }
     }
     show(ar,N);
     return;
}

void bubbleSortDesc(int ar[],int N)
{
   int f,c,t;

   rndassign(ar,N);
   show(ar,N);

   for(f=0;f<N-1;f++)
   {
      for(c=0;c<N-f-1;c++)
      {
         if(ar[c]<ar[c+1])
         {
            t=ar[c];
            ar[c]=ar[c+1];
            ar[c+1]=t;
         }
      }
   }
   show(ar,N);
   return;
}

void bubbleSortAsc(int ar[],int N)
{
   int f,c,t;

   rndassign(ar,N);
   show(ar,N);

   for(f=0;f<N-1;f++)
   {
      for(c=0;c<N-f-1;c++)
      {
         if(ar[c]>ar[c+1])
         {
            t=ar[c];
            ar[c]=ar[c+1];
            ar[c+1]=t;
         }
      }
   }
   show(ar,N);
   return;
}

int main()
{   
   const int N=10;
   int ar[N];
   randomize();
   return 0;
}