#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // For system("command")
/*Determining Even or Odd.*/

void clrscr()      // For clearing
{
    system("cls");
    return;
}

int num(int a)
{
    return a%2;
}

void menu(void)
{
    int op;
    int n=120;
    

    do
    {
        //clrscr(); // optionl

        printf("\n\t\t\t\t Even Odd");
        printf("\n\t\t\t 1.Evaluate");
        printf("\n\t\t\t 2.Change Number");
        printf("\n\t\t\t 3.Exit");
        printf("\n\t\t\t Enter choice number:");
        scanf("%d",&op);

        switch(op)
        {
         case 1 :
            if(num(n)==0)
            {
                printf("\n\t Even Number");
            }
            else
            {
                printf("\n\t Odd Number");
            }
            fflush(stdin); getch();
            break;
         case 2 :
            printf("\n Enter Number :");
            scanf("%d",&n);
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