#include<stdio.h>
#include<conio.h>
/* check wetheer the given character is a vowel.
*/
int main()
{
    char ch;
    printf("\nEnter an alphabet");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("\n\tIt is a vowel: %c",ch); 
    }
    else //ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' 
    {
        printf("\n\tNot a vowel");
    }
    return(0);
}