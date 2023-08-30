#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // For system("command")
/*Determining percentage scored by student.*/

void clrscr()      // For clearing
{
    system("cls");
    return;
}

float percent(float a,float b,float c, float d,float e)
{
    return ((a+b+c+d+e)*100.0)/250.0;
}
float total(float a,float b,float c, float d,float e)
{
    return a+b+c+d+e;
}

void menu(void)
{
    int op;
    float e=49,m=49,p=40,c=50,b=45,tot,per;

    do
    {
        printf("\n\t\t\t\t Student Performance");
        printf("\n\t\t\t 1.Calculate and show Total");
        printf("\n\t\t\t 1.Calculate and show Percentage");
        printf("\n\t\t\t 2.Change Marks");
        printf("\n\t\t\t 3.Exit");
        printf("\n\t\t\t Enter choice number:");
        scanf("%d",&op);

        switch(op)
        {
         case 1 :
            tot=total(p,c,m,b,e);
            per=percent(p,c,m,b,e);

            printf("\n Total          : %g",tot);
            printf("\n percentage     : %g",per);
            fflush(stdin); getch();
            break;
         case 2 :
            printf("\n Enter marks :");
            scanf("%f%f%f%f%f",&p,&c,&m,&b,&e);
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