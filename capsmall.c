#include<stdio.h>
#include<conio.h>
/* To find conversion of each capital and small letters in a string */
int main()
{
  char str[20];
  int x;
    
  printf("\n\t Enter name:");
  fgets(str,20,stdin); 

  for(x=0;str[x]!='\0';x++)
            ;
  if(str[x-1]=='\n')
  str[x-1]='\0';

  for(x=0;str[x]!='\0';x++)
  {
   if(str[x]>=65 && str[x]<=90)
   str[x]+=32;
   else if(str[x]>=97 && str[x]<=122)
   str[x]-=32;
  }
  printf("\n\t The toggled string is : '%s'\n",str);

  return(0);
}