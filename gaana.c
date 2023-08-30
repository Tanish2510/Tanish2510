#include<stdio.h>
#include<conio.h>
/* TO WRITE A NEW FILE NAMED GANNA*/

int main()
{
    FILE *f;

    f=fopen("gaana.txt","w");

    if(f==NULL)
    {
        printf("\n FILE IS WRITE PROTECTED !");
    }

    char ch;
    do
    {
        fflush(stdin);
        ch=getche();

        if(ch=='\r'||ch=='\n')
        {
            ch='\n';
            printf("\n");
        }

        if (ch == 26 || ch == 27)
            break;
        fputc(ch,f);

        
    } while (ch !=26 && ch!=27);
    
    fclose(f);
return(0);
}