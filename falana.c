#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *f1,*f2;
    char ch;

    f1=fopen("alana.txt","r");
    f2=fopen("alanatofalana.c","w");

    if(f1==NULL)
    {
        printf("\n FILE NOT FOUND ");
    }

    while((ch=fgetc(f1))!=EOF)
    {
        if(ch>=65 && ch<=90)
        {
           ch+=32;
        }
        fputc(ch,f2);

    }
    fclose(f1);
    fclose(f2);
    
}