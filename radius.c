#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // For system("command")
/* Calculating area and circumference of a circle.*/
void clrscr()      // For clearing
{
    system("cls");
    return;
}

float area(float a)
{
    return 3.14*a*a;
}

float circum(float a)
{
    return 2.0*3.14*a;
}

void menu(void)
{
    int op;
    float r,c,a;
    printf("\n Enter radius:");
    scanf("%f",&r);
    do
    {
        printf("\n\t\t\t\t CIRCLE");
        printf("\n\t\t\t 1.Calculate and show area");
        printf("\n\t\t\t 1.Calculate and show circumference");
        printf("\n\t\t\t 2.Change R");
        printf("\n\t\t\t 3.Exit");
        printf("\n\t\t\t Enter choice number:");
        scanf("%d",&op);

        switch(op)
        {
         case 1 :
            a=area(r);
            c=circum(r);

            printf("\n Radius         : %g",r);
            printf("\n Area           : %g",a);
            printf("\n Circumference  : %g",c);
            fflush(stdin); getch();
            break;
         case 2 :
            printf("\n Enter Radius :");
            scanf("%f",&r);
            break;
         case 3 :
            printf("\n Bye-Bye");
            break;
         case 4 :
            printf("\n Invalid input!");
            break;
        }
    } while (op!=3);
    
}

int main()
{
    menu();
    return(0);
}
