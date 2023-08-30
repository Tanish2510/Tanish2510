#include<stdio.h>
#include<conio.h>
/* To find the vowels given in the string. */
int main()
{
    char str[20];
    int x;

    printf("\n\t Enter a name:");
    fgets(str,20,stdin);

    for(x=0;str[x]!='\0';x++)
               ;
    if(str[x-1]=='\n')
       str[x-1]='\0';

    printf("vowels in '%s' are:  ",str);
    

    for(x=0;str[x]!='\0';x++)
    {
        if(str[x]=='a'|| str[x]=='e' || str[x]=='i'|| str[x]=='o'|| str[x]=='u' || str[x]=='A'|| str[x]=='E'|| str[x]=='I'|| str[x]=='O'|| str[x]=='U')
        {
            printf("\n\t%c",str[x]);
        }
    }


    return(0);
}