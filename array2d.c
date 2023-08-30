#include<stdio.h>
#include<conio.h>
#include"array2d.h"
#include<time.h>
#include<stdlib.h>

void Randomize()
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

void showarray(int A[][20],int N,int M)
{
    int r,c;
    printf("\n");
    for(r=0;r<N;r++)
    {
        printf("\n");
        for(c=0;c<M;c++)
        {
            printf("%4d",A[r][c]);
        }
    }
}
void rndAssign(int A[][20],int N,int M)
{
    int r,c;
    for(r=0;r<N;r++)
    {
        for(c=0;c<M;c++)
        {
            A[r][c]=random(N*M) + 1;
        }
    }
}

void linearSearch(int A[][20],int N,int M,int val)
{

}
void uniquerowrndAssign(int A[][20],int N,int M);
void uniquecolrndAssign(int A[][20],int N,int M);
void uniquerndAssign(int A[][20],int N,int M);

void rowSortAsc(int A[][20],int N,int M)
{
   int f,c1,r1,t;
   
   for(r1=0;r1<N;r1++)
   {
     for(f=0;f<N-1;f++)
     {
        for(c1=0;c1<M-f-1;c1++)
        {
           if(A[r1][c1]>A[r1][c1+1])
           {
              t=A[r1][c1];
              A[r1][c1]=A[r1][c1+1];
              A[r1][c1+1]=t;
           }
        }
     }
   }
}
void rowSortDesc(int A[][20],int N,int M);
void colSortAsc(int A[][20],int N,int M)
{
    int r,c,x,t;

    for(c=0;c<M;c++)
    {
        for(r=0;r<N;r++)
        {
            if(A[r][c]>A[x][c])
            {
                t=A[r][c];
                A[r][c]=A[x][c];
                A[x][c]=t;
            }
        }
    }
    return;  

}

void colSortDesc(int A[][20],int N,int M)
{
    int r,c,x,t;

    for(c=0;c<M;c++)
    {
        for(r=0;r<N;r++)
        {
            if(A[r][c]<A[x][c])
            {
                t=A[r][c];
                A[r][c]=A[x][c];
                A[x][c]=t;
            }
        }
    }  
}

void rowSum(int A[][20],int B[],int N,int M)
{
    int r,c,sm;
    for(r=0;r<N;r++)
    {
        sm=0;
        for(c=0;c<M;c++)
        {
           sm += A[r][c];
        }
    }
    for(c=0;c<M;c++)
    {
        B[c]=sm;
    }

}
void colSum(int A[][20],int B[],int N,int M)
{
    int r,c,sm;
    for(c=0;c<M;c++)
    {
        sm=0;
        for(r=0;r<N;r++)
        {
            sm += A[r][c];
        }
        
    }

}
int  isUnitMatrix(int A[][20],int N,int M);
int  isUppermatrix(int A[][20],int N,int M);
int  isLowerMatrix(int A[][20],int N,int M);
int  leftDiagonalSum(int A[][20],int N,int M);
int  rightDiadonalSum(int A[][20],int N,int M);
int  bothDiadonalSum(int A[][20],int N,int M);
int  sumNonDiagonal(int A[][20],int N,int M);
void matrixAdd(int A[][20],int B[][20],int C[][20],int N,int M);
void matrixTranspos(int A[][20],int B[][20],int C[][20],int N,int M);

void matrixMulti(int A[][20],int B[][20],int C[][20],int N,int M)
{
  int rN,cN,cmN,r,c,cm;
  for(c=0;c<cN;c++)
  {
    C[r][c] =0;
    for(cm=0;cm<cmN;c++)
    {
        C[r][c] += A[r][cm]*B[cm][c];
    }
  }   
}

void menu()
{
    int op;
    int const N=20,M=20;
    int ar[N][M]={0};
    int ar2[N];

    Randomize();
    rndAssign(ar,N,M);

    do
    {
        clrscr();
        printf("\n\t\t\t\t TWO DIMENSIONAL ARRAY TASKS:");
        printf("\n\t\t\t  1. Show the Values: ");
        printf("\n\t\t\t  2. Random Value Assignment: ");
        printf("\n\t\t\t  3. Sorting Column in Ascending:");
        printf("\n\t\t\t  4. Sorting Column in Descending:");
        printf("\n\t\t\t  5. Sum of Row:");
        printf("\n\t\t\t  6. Sorting Row in Ascending:");
        printf("\n\t\t\t  7. ");
        printf("\n\t\t\t  8. ");
        printf("\n\t\t\t  9. ");
        printf("\n\t\t\t 10. ");
        printf("\n\t\t\t 11. ");
        printf("\n\t\t\t 12. ");
        printf("\n\t\t\t 13. ");
        printf("\n\t\t\t 14. ");
        printf("\n\t\t\t 15. ");
        printf("\n\t\t\t 16. ");
        printf("\n\t\t\t 17. EXIT");
        printf("\n\t\t\t  Enter choice number");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
            showarray(ar,N,M);
            break;
            case 2:
            rndAssign(ar,N,M);
            break;
            case 3:
            colSortAsc(ar,N,M);
            break;
            case 4:
            ;
            break;
            case 5:
            rowSum(ar,ar2,N,M);
            break;
            case 6:
            rowSortAsc(ar,N,M);
            break;
            case 7:
            ;
            break;
            case 8:
            ;
            break;
            case 9:
            ;
            break;
            case 10:
            ;
            break;
            case 11:
            ;
            break;
            case 12:
            ;
            break;
            case 13:
            ;
            break;
            case 14:
            ;
            break;
            case 15:
            ;
            break;
            case 16:
            ;
            break;
        }
        printf("\n Press any key to continue");
        fflush(stdin); getch();
    }while(op!=17);
}

int main()
{
    menu();
    return(0);
}