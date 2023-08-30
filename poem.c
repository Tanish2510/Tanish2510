#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *f;
    char  ch;
    int   al,cp,sm,vo,co,dg,sp,ch1;

    f=fopen("poem.txt","r");

    if(f==NULL)
    {
        printf("\n FILE NOT FOUND ");
        return -1;
    }
    ch1=al=cp=sm=vo=co=dg=sp=0;                        
    while((ch=fgetc(f))!=EOF)
    {
   
      if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
      {
         al++;
         if(ch>=65 && ch<=90)
         {
           cp++;   
         }
         else if(ch>=97 && ch<=122)
         {
           sm++;   
         }
         switch(ch)
         {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':
            vo++;
            break;
          default :
            co++;  
         }
      }
      else if(ch>='0' && ch<='9')
      {
        dg++;
      }
      else
      {
        sp++;
      }
   
    }
    ch1=al+cp+sm+vo+co+dg+sp;
   
    printf("\nAlphabet : %d",al);
    printf("\nCapital  : %d",cp);
    printf("\nSmall    : %d",sm);
    printf("\nVowel    : %d",vo);
    printf("\nConsonant: %d",co);
    printf("\nDigit    : %d",dg);
    printf("\nSpecial  : %d",sp);
    printf("\nTotal    : %d",ch1);
    
    fclose(f);

    return(0);
}