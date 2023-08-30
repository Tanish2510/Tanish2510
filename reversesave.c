#include<stdio.h>
#include<conio.h>
/* To find reverse of given string */
int main()
{
  char str[20],str2[20];
  int x;
    
  printf("\n\t Enter name:");
  fgets(str,20,stdin); // tanish

  for(x=0;str[x]!='\0';x++)
            ;
  if(str[x-1]=='\n')
     str[x-1]='\0';

  printf("\n\t Original string is : '%s'\n",str);
  
  printf("\n\t Reversed name in second string is:\t"); 
  for(x=(x-2);x>=0;x--)
  {
    str2[x]=str[x];
    printf("%c\n",str2[x]);
  
  }
       
 return(0);
}