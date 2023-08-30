#include<stdio.h>
#include<conio.h>
/* To store the value of one string onto the other */
int main()
{
  char str[20],str2[20];
  int x;
    
  printf("\n\t Enter name:");
  fgets(str,20,stdin); 

  for(x=0;str[x]!='\0';x++)
            ;
  if(str[x-1]=='\n')
  str[x-1]='\0';

  for(x=0;str[x]!='\0';x++)
  {
    str2[x]=str[x];
  }
  printf("\n\t In second string : %s",str2);

  return(0);
}