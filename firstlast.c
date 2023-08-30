#include<stdio.h>
#include<conio.h>
/* To find first and last characteer of given string */
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
    
    printf("\n\t The first and last char of %s are %c and %c",str,str[0],str[x-2]);
    // since [x-1]='\0' therefore for last character we use [x-2]
    return(0);
}