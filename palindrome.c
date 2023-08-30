#include<stdio.h>
#include<string.h>
#include<conio.h>
/* To find reverse of given string */
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

  printf("\n\t Original string is : '%s'\n",str);
  
  strcpy(str2,str);
  strrev(str2);

  if(strcmp(str,str2)==0)
    printf("\n\tString is a palindrome");
  else
    printf("\n\tString is a not palindrome");
       
 return(0);
}