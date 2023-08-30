
/*int main()
{
   
    int i,j,n,s;
    int k,l;
    int value[9][9];
    int total_row[9];
    int total_col[9];
    
    printf("'enter the inputs of a soduko,and check whether its correct or not'\n");
    
    printf("\n input no of 'rows x column' \n");

    scanf("\n%d",&k);
    scanf("\t%d",&l);
   
    printf("values\n");
    
    for(i=0;i<k;i++)
    {
        total_row[i]=0;
        for(j=0;j<l;j++)
        {
            scanf("%d",&value[i][j]);
           
            total_row[i]=total_row[i]+value[i][j];
        }
    }
   
   
    for(j=0;j<l;j++)
    {
        total_col[j]=0;
        for(i=0;i<k;i++)
        {
           
            total_col[j]=total_col[j]+value[i][j];


        }
    }


    for(i=0;i<k;i++)
    {
        printf("\n");
        for(j=0;j<l;j++)
        {
            printf(" \t %d ",value[i][j]);
        }
    }



    s=((k*(k+1))/2);
    
    for(n=0;n<k;n++)
    {
      if((total_col[n])!=s)
       printf("\n incorrect i/p's col_%d ",n+1 );
   
      else if((total_row[n])!=s)
       printf(" incorrect i/p's row_%d ",n+1);
      
      else if(total_row[n] && s && total_col[n])
       printf("\n correct i/p for both %d  row and col ",n+1);
    
      else if(total_row[n] && s )
       printf("\n correct i/p for %d  row  ",n+1);
      
      else if(s && total_col[n])
       printf("\n correct i/p for %d  col ",n+1);
      
      else
      {
      }
    }
  //fflush(stdin);
    getch();
    getch();
    getch();
    getch();
    getch();
    getch();
    getch();
    getch();
}*/



/*int isAvailable(int puzzle[][9], int row, int col, int num)
{
    int rowStart = (row/3) * 3;
    int colStart = (col/3) * 3;
    int i, j;

    for(i=0; i<9; ++i)
    {
        if (puzzle[row][i] == num) return 0;
        if (puzzle[i][col] == num) return 0;
        if (puzzle[rowStart + (i%3)][colStart + (i/3)] == num) return 0;
    }
    return 1;
}

int fillSudoku(int puzzle[][9], int row, int col)
{
    int i;
    if(row<9 && col<9)
    {
        if(puzzle[row][col] != 0)
        {
            if((col+1)<9) return fillSudoku(puzzle, row, col+1);
            else if((row+1)<9) return fillSudoku(puzzle, row+1, 0);
            else return 1;
        }
        else
        {
            for(i=0; i<9; ++i)
            {
                if(isAvailable(puzzle, row, col, i+1))
                {
                    puzzle[row][col] = i+1;
                    if((col+1)<9)
                    {
                        if(fillSudoku(puzzle, row, col +1)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else if((row+1)<9)
                    {
                        if(fillSudoku(puzzle, row+1, 0)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else return 1;
                }
            }
        }
        return 0;
    }
    else return 1;
}

int main()
{
    int i, j;
    int puzzle[9][9]={{0, 0, 0, 0, 0, 0, 0, 9, 0},
                      {1, 9, 0, 4, 7, 0, 6, 0, 8},
                      {0, 5, 2, 8, 1, 9, 4, 0, 7},
                      {2, 0, 0, 0, 4, 8, 0, 0, 0},
                      {0, 0, 9, 0, 0, 0, 5, 0, 0},
                      {0, 0, 0, 7, 5, 0, 0, 0, 9},
                      {9, 0, 7, 3, 6, 4, 1, 8, 0},
                      {5, 0, 6, 0, 8, 1, 0, 7, 4},
                      {0, 8, 0, 0, 0, 0, 0, 0, 0}};

    if(fillSudoku(puzzle, 0, 0))
    {
        printf("\n+-----+-----+-----+\n");
        for(i=1; i<10; ++i)
        {
            for(j=1; j<10; ++j) printf("|%d", puzzle[i-1][j-1]);
            printf("|\n");
            if (i%3 == 0) printf("+-----+-----+-----+\n");
        }
    }
    else printf("\n\nNO SOLUTION\n\n");

    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 9
 
 
//function 1
int obeysSudokuRules(int a[][size])
{
    int count[10];
    int i,r,c,z;//r: row, c: column
    int k=0; //No. of rows in a grid
    int j=0; // No. of columns in a grid
    for ( r=0; r<size; r++) //start from 1st row checking colums
    {
        for( c=0; c<size; c++)
        {
            count[a[r][c]]++;
        if ( (count[a[r][c]]) > 1)
         return 0; 
        }
        for (i=0; i<size; i++)
        { count[i]=0; } // to clear
         }//end row loop
     
    for (i=0; i<size; i++)
    { count[i]=0; } // to clear
 
 
//start from 1st col checking rows
    for ( c=0; c<size; c++) 
    {
        for( r=0; r<size; r++)
        {
            count[a[r][c]]++;
        if ( (count[a[r][c]]) > 1)
            return 0;
        }
            for (i=0; i<size; i++)
        { count[i]=0; } // to clear
         }//end col loop
     
        for (i=0; i<size; i++)
        { count[i]=0; } // to clear
//z is No. of grids
    r=0; c=0;
    for ( z=0; z<size; z++) 
    {
        //int k=0; //No. of rows in a grid
        //int j=0; // No. of columns in a grid
        while (k<3)
        {
            while(j<3)
            {
                count[a[r][c]]++;
                 
                if ( (count[a[r][c]]) > 1)
                    return 0;
                c++; j++;
            } //end of j loop
            r++; k++;
        } // end of k loop
        if(z<2)
        { r=0; }
        if(z==2)
        { c=0; r=3; }
        if((z>2)&&(z<5))
        { r=3; }
        if(z==5)
        { c=0; r=6; }
        if(z>5)
        { r=6; }
 
 
        for (i=0; i<size; i++)
            { count[i]=0; } // to clear & end z loop
    return 1;
    } }// end grid loop
 
 
//function 2
void printGrid(int a[][size])
{
    int r, c;
 
 
    for(r=0; r<size; r++)
    {
        for(c=0; c<size; c++)
        {
            if ((a[r][c])== 0)
            {
                printf("  ");
            }
            else
            {
                printf("%d",a[r][c]);
            }
            printf("\n");
        }
    }
}
//function 3 calls this  (a)                          
int genGrid(int a[][size], int row, int column)
{ 
    int i, r; int swap;
    int currentRow[size]={1,2,3,4,5,6,7,8,9};
    int obyesRules;
 
 
    if (row == size)
    return 1;
   
   for(i=0;i<size-1;i++)
   {
    r= i+ (rand()%8);
    swap=currentRow[i];
    currentRow[i]=currentRow[r];
    currentRow[r]=swap;
   }
    
   for(i=0;i<size;i++)
   {
    a[row][column] = currentRow[i];
    if (obeysSudokuRules==1)
    {
        if (column == size -1)
            obyesRules = genGrid(a, row + 1, 0);
        else
            obyesRules = genGrid(a, row, column + 1);
        if(obyesRules)
            return 1 ;
    } // close inner if statement
    } // close for loop
    
   a[row][column] = 0;
    
   return 0 ;
}
// function 3 call this (b)
void fillZeros (int a[][size])
{
    int counter=0;
    int r,random;
 
 
    for(r=0; r<size; r++)
    {
        while (counter<=4)
        {
            random= (rand()%8);
            a[r][random]=0;
            counter++;
        }
    }
}
 
 
//function 3
void genPartialGrid(int a[][size])
{    
    int obeysRules; int r, c;
     
   do{
       for(r=0; r<size; r++)
       {
           for(c=0; c<size ;c++)
               a[r][c]= 0;  //Fill array a with all zeros
       }
        obeysRules = genGrid(a, 0, 0);
      
   } while (obeysRules == 0);
 
 
   fillZeros(a);
}
 
 
//function 5 &4
int getRowNum(void)
{
    int row;
    printf(" please enter the row number that you want to enter the value\n");
    scanf("%d",row);
 
 
    while ((row <0) || (row>8))
    {
        printf(" please enter the row number that you want to enter the value");
        scanf("%d",&row);
    }
    return row;
}
 
 
int getCloumnNum(void)
{
    int column;
    printf(" please enter the column number that you want to enter the value");
    scanf("%d",&column);
 
 
    while ((column<0) || (column>8))
    {
        printf(" please enter the row number that you want to enter the value");
        scanf("%d",column);
    }
    return column;
}
//function 6
int getValue(void)
{
int value;
printf("\nPlease Enter the value: ");
scanf("%d",&value);
return value;
}
 
 
 
 
int compSolve(int a[][size])
   {
       int r = 0; int c = 0;
       int checkZero;
       while(r<9)
       {
           while(c<9)
           {
               if((a[r][c])==0)
                   checkZero = 0;
               else checkZero = 1;
               c++;
           }
       r++;
       }
       return checkZero;
   }
 
 
 
 
int main(void)
{
int a[size][size];
int r,c, value, obey, solve;
srand(time(NULL)); //to randomize random number generation
 
 
printf("This a sudoku Game.All numbers in rows and columns must not be repeated");
 
 
genPartialGrid(a);     //call function genPartialGrid to generate a partially filled grid that does not violate Sudoku rules
 
 
printGrid(a);          //call function printGrid
 
 
do
{
 
 
r = getRowNum();              //call function getRowNum to determine the row number
c = getColumnNum();           //call function getColumnNum to determine the column number
value = getValue();
printGrid(a);   //call function to get the value (between 1 and 9) 
a[r][c] = value;              //enter the value in the grid at the row and column positions entered
                              //call function printGrid
obey = obeysSudokuRules;
solve = compSolve;
 
 
} while ((obey ==1) && (solve == 0));
 
 
if ((solve == 1) && (obey == 1))
{
    printf("congratulation,you have solve the puzzle");
    printGrid(a);
}
else                                   /* it means Sudoku rules are not all obeyed */
{
    printf(" Sorry, the Solution is incorrect");
}
printf(" thank you, good bye");
 
 
return 0;
}
