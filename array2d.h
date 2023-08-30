#pragma once

void Randomize();
int  random(int);
void clrscr();
void showarray(int A[][20],int N,int M);
void rndAssign(int A[][20],int N,int M);
void uniquerowrndAssign(int A[][20],int N,int M);
void uniquecolrndAssign(int A[][20],int N,int M);
void uniquerndAssign(int A[][20],int N,int M);
void rowSortAsc(int A[][20],int N,int M);
void rowSortDesc(int A[][20],int N,int M);
void colSortAsc(int A[][20],int N,int M);
void colSortDesc(int A[][20],int N,int M);
void rowSum(int A[][20],int B[],int N,int M);
void colSum(int A[][20],int B[],int N,int M);
int  isUnitMatrix(int A[][20],int N,int M);
int  isUppermatrix(int A[][20],int N,int M);
int  isLowerMatrix(int A[][20],int N,int M);
int  leftDiagonalSum(int A[][20],int N,int M);
int  rightDiadonalSum(int A[][20],int N,int M);
int  bothDiadonalSum(int A[][20],int N,int M);
int  sumNonDiagonal(int A[][20],int N,int M);
void matrixAdd(int A[][20],int B[][20],int C[][20],int N,int M);
void matrixTranspos(int A[][20],int B[][20],int C[][20],int N,int M);
void matrixMulti(int A[][20],int B[][20],int C[][20],int N,int M);
void linearSearch(int A[][20],int N,int M,int val);