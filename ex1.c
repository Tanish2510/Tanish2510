#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // For system("command")

void clrscr()      // For clearing
{
    system("cls");
    return;
}

float simple(float a, float b, float c)
{
    return a*b*c /100;
}

void menu(void)
{
    int op;
    float p=1000,r=10,t=10,si;

    do
    {
        clrscr(); // optionl

        printf("\n\t\t\t\t Simple interest");
        printf("\n\t\t\t 1.Calculate and show");
        printf("\n\t\t\t 2.Change P R and T");
        printf("\n\t\t\t 3.Exit");
        printf("\n\t\t\t Enter choice number:");
        scanf("%d",&op);

        switch(op)
        {
         case 1 :
            si=simple(p,r,t);

            printf("\n P  : %g",p);
            printf("\n R  : %g",r);
            printf("\n T  : %g",t);
            printf("\n SI : %g",si);
            fflush(stdin); getch();
            break;
         case 2 :
            printf("\n Enter P R and T :");
            scanf("%f%f%f",&p,&r,&t);
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