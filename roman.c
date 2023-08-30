#include<stdio.h>
#include<conio.h>
/* Program: To create a roman converter.
*/
int main()
{
    int num;
    printf("\n\t Enter a number between 1 and 10 both included:\n\t");
    scanf("%d",&num);

    printf("The entered number is:\n\t%d",num);

    if(num==1)
      {                    
        printf("\n\tRoman character: I");
      }
    if(num==2)
      {                    
        printf("\n\tRoman character: II");
      }   
    if(num==3)
      {                    
        printf("\n\tRoman character: III");
      }
    if(num==4)
      {                    
        printf("\n\tRoman character: IV");
      }
    if(num==5)
      {                    
        printf("\n\tRoman character: V");
      }
    if(num==6)
      {                    
        printf("\n\tRoman character: VI");
      }
    if(num==7)
      {                    
        printf("\n\tRoman character: VII");
      }
    if(num==8)
      {                    
        printf("\n\tRoman character: VIII");
      }
    if(num==9)
      {                    
        printf("\n\tRoman character: IX");
      }
    if(num==10)
      {                    
        printf("\n\tRoman character: X");
      } 
    if(num>10)
        printf("\n\t ERROR");



    return(0);
}