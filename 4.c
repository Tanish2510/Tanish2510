#include<stdio.h>
#include<conio.h>
/* To find type of each letters in a string */
int main()
{
  char str[20];
  int x,al,cp,sm,vo,co,dg,sp,ch;
  cp=sm=vo=al=co=dg=sp=0;
    
  printf("\n\t Enter name:");
  fgets(str,20,stdin); 

  for(x=0;str[x]!='\0';x++)
            ;
  if(str[x-1]=='\n')
  str[x-1]='\0';

  for(x=0;str[x]!='\0';x++)
  {
   if(str[x]>='a' && str[x]<='z' || str[x]>='A' && str[x]<='Z')
   {
     al++;
   if(str[x]>=65 && str[x]<=90)
   {
     cp++;   
   }
    else if(str[x]>=97 && str[x]<=122)
   {
     sm++;   
   }
    if(str[x]=='a'|| str[x]=='e' || str[x]=='i'|| str[x]=='o'|| str[x]=='u' || str[x]=='A'|| str[x]=='E'|| str[x]=='I'|| str[x]=='O'|| str[x]=='U')
   {
     vo++;   
   }
    else
   {
     co++;   
   }
   }
   else if(str[x]>='0' && str[x]<='9')
   {
     dg++;
   }
    else
   {
     sp++;
   }
   
  }
  ch=al+cp+sm+vo+co+dg+sp;
   
   printf("\nAlphabet : %d",al);
   printf("\nCapital  : %d",cp);
   printf("\nSmall    : %d",sm);
   printf("\nVowel    : %d",vo);
   printf("\nConsonant: %d",co);
   printf("\nDigit    : %d",dg);
   printf("\nSpecial  : %d",sp);
   printf("\nTotal    : %d",ch);
  
  
 return(0);
}