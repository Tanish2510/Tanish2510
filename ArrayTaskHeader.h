#pragma once
/*
   none of the function prints any thing from its's definition(body),
   function either changes the passed array or returns result back to calling line.
*/
void setSeed(int seed);   // to set seed for random number generation
int randRange(int start,int end);   // a random number between start and ebd (both included)
int randBit(int bitCount);          // makes a value between 0 and number that can be formed using specified amount of bits
void show(int A[],int N);

void uniqueRndAssign(int A[],int N) ;     // non repeating values in array        
void rndAssign(int A[],int N);            // value may be repeated        
int linearSearch(int A[],int N, int val) ;      // value to be searched

int binarySearchASC(int A,int N,int val) ;      // value to be searched
int binarySearchDESC(int A,int N,int val) ;      // value to be searched

void linearSortAsc(int A[],int N);
void linearSortDesc(int A[],int N);

void bubbleSortAsc(int A[],int N);
void bubbleSortDesc(int A[],int N);

void shuffle(int A[],int N,int count); // count is shuffle count (how many times shuffling will be performed.

int get(int A[],int N,int index);// returns value of given index from the array

void reverseArray(int A[],int N);

int largest(int A[],int N);
int smallest(int A[],int N);

int sumMultipleOfK(int A[],int N,int k);

float mean(int A[],int N);
int median(int A[],int N);
int mode(int A[],int N); // return the largest value for multimodal mode 

int count(int A[],int N, int value) ; // returns frequency of value in passed array
int index(int A[],int N,int startIndex,int endIndex, int nthOccurwnce,int value);
          // returns Nth occurance of value in the range between start and end index(both included)

		  
int sumPrime(int A[],int N);
int sumArmstrong1(int A[],int N); // sum if cube of digits
int sumArmstrong2(int A[],int N); // sum of digit to the power digit itself

void reverseElement(int A[],int N); // every element will become reverse of itself

void clockRotate(int A[], int N, int rotationCount);   // clock wise rotation for given ritation count times
void anticlockRotate(int A[], int N, int rotationCount);


void rangedClockRotate(int A[], int N, int rotationCount, int statIndex, int endIndex);
void rangedAnticlockRotate(int A[], int N, int rotationCount,  int statIndex, int endIndex);


void mergeAAA(int A[],int  B[],int C[],int N,int M); 
void mergeAAD(int A[],int  B[],int C[],int N,int M); 
void mergeADA(int A[],int  B[],int C[],int N,int M); 
void mergeADD(int A[],int  B[],int C[],int N,int M); 
void mergeDAA(int A[],int  B[],int C[],int N,int M); 
void mergeDAD(int A[],int  B[],int C[],int N,int M); 
void mergeDDA(int A[],int  B[],int C[],int N,int M); 
void mergeDDD(int A[],int  B[],int C[],int N,int M); 
