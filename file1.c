#include<stdio.h>
/*To Check if the file exists in the RAM or not*/
int main()
{
    FILE *f;

    f=fopen("pattern10.c","r");

    if(f==NULL)
    {
        printf("\n FILE NOT FOUND ");
    }
    else
    {
        printf("\n FILE OPENED AT RAM ");
    }

    fclose(f);
}