#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // For system("command").
#include<math.h>   // To include pow function.

void clrscr()      
{
    system("cls");
    return;
}

/************************************************************************************\
*                            SIMPLE CALCULATOR MENU                                   *
\************************************************************************************/
int sum(int a,int b)
{
    return(a+b);
}
int sub(int a,int b)
{
    
    return(a-b);
}
int mul(int a,int b)
{
    return(a*b);
}
int divi(int a,int b)
{
    return(a/b);
}
int rem(int a,int b)
{
    return(a%b);
}

void calcmenu()
{
    int op;
    int x=10,y=2,z;

    do
    {
        clrscr();
        printf("\n\t\t\t*** Simple Calculator ***");
        printf("\n\n\t\t\t 1 -> SUM ");
        printf("\n\t\t\t 2 -> SUB ");
        printf("\n\t\t\t 3 -> MUL ");
        printf("\n\t\t\t 4 -> DIVI");
        printf("\n\t\t\t 5 -> REM ");
        printf("\n\t\t\t 6 -> CHANGE VALUES");
        printf("\n\t\t\t 7 -> EXIT\n");
        printf("\n\t\t\t Enter choice number:\t");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
            z=sum(x,y);
            printf("\n %d + %d = %d",x,y,z);
            break;
            case 2:
            z=sub(x,y);
            printf("\n %d - %d = %d",x,y,z);
            break;
            case 3:
            z=mul(x,y);
            printf("\n %d * %d = %d",x,y,z);
            break;
            case 4:
            z=divi(x,y);
            printf("\n %d / %d = %d",x,y,z);
            break;
            case 5:
            z=rem(x,y);
            printf("\n %d %% %d = %d",x,y,z);
            break;
            case 6:
            printf("\n Enter values for x and y :");
            printf("\n");
            scanf("%d%d",&x,&y);
            break;   
        }

        if(op>=1 && op<=5)
        {
            printf("\n Press any key to continue");
            fflush(stdin); getch();
        }

    } while (op!=7); 
}
/************************* End of Simple Calculator *********************************/


/************************************************************************************\
*                          INTEREST CALCULATOR MENU                                   *
\************************************************************************************/

float simple(float a,float b,float c)
{
    return (a*b*c /100);
}
float compound(float a,float b,float c)
{
    return a* pow((1+b/100) ,c)-a;
}

void interestmenu()
{
    int op; // since for other menu op is different variable.
    float p=100,r=10,t=10,i;

    do
    {
        clrscr();
        printf("\n\t\t\t*** Interest Calculator ***");
        printf("\n\n\t\t\t 1 -> calculate Simple interest ");
        printf("\n\t\t\t 2 -> calculate compound interest ");
        printf("\n\t\t\t 3 -> Change P R and T ");
        printf("\n\t\t\t 4 -> Exit ");
        printf("\n\t\t\t 5 -> Go back\n ");
        printf("\n\t\t\t 6 -> Enter choice number:\t");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
            i=simple(p,r,t);
            printf("\n\t\t P  : %g",p);
            printf("\n\t\t R  : %g",r);
            printf("\n\t\t T  : %g",t);
            printf("\n\t\t SI : %g",i);
            fflush(stdin); getch();
            break;
            case 2:
            i=compound(p,r,t);
            printf("\n\t\t P  : %g",p);
            printf("\n\t\t R  : %g",r);
            printf("\n\t\t T  : %g",t);
            printf("\n\t\t CI : %g",i);
            fflush(stdin); getch();
            break;
            case 3:
            printf("\n Enter P R and T :\n");
            scanf("%f%f%f",&p,&r,&t);
            break;
            case 4:
            exit(0); // given in stdlib.h returns ton original menu.
            break;
        }
        if(op>=1 && op<=3)
        {
            printf("\n Press any key to continue");
            fflush(stdin); getch();
        }

    } while (op!=5);
    
}

/************************* End of Interest Calculator *********************************/

/************************************************************************************\
*                                  CIRCLE MENU                                        *
\************************************************************************************/

float area(float a)
{
    return 3.14*a*a;
}

float circum(float a)
{
    return 2.0*3.14*a;
}

void circlemenu(void)
{
    int op;
    float r,c,a;
    printf("\n Enter radius:");
    scanf("%f",&r);
    do
    {
        clrscr();
        printf("\n\t\t\t *** CIRCLE ***");
        printf("\n\n\t\t\t 1 -> Calculate and show area");
        printf("\n\t\t\t 1 -> Calculate and show circumference");
        printf("\n\t\t\t 2 -> Change R");
        printf("\n\t\t\t 3 -> Exit\n");
        printf("\n\t\t\t Enter choice number:\t");
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
            printf("\n Enter Radius :\n");
            scanf("%f",&r);
            break;
         case 3 :
            printf("\n Bye-Bye");
            break;
         case 4 :
            printf("\n Invalid input!");
            break;
        }
        if(op>=1 && op<=1)
        {
            printf("\n Press any key to continue");
            fflush(stdin); getch();
        }
    } while (op!=3);
    
}

/****************************   End of Circle Menu  *********************************/

/************************************************************************************\
*                                  PERCENTAGE MENU                                    *
\************************************************************************************/


float percent(float a,float b,float c, float d,float e)
{
    return ((a+b+c+d+e)*100.0)/250.0;
}
float total(float a,float b,float c, float d,float e)
{
    return a+b+c+d+e;
}

void percentmenu(void)
{
    int op;
    float e=49,m=49,p=40,c=50,b=45,tot,per;

    do
    {
        clrscr();
        printf("\n\t\t\t*** Student Performance ***");
        printf("\n\n\t\t\t 1 -> Calculate and show Total");
        printf("\n\t\t\t 1 -> Calculate and show Percentage");
        printf("\n\t\t\t 2 -> Change Marks");
        printf("\n\t\t\t 3 -> Exit\n");
        printf("\n\t\t\t Enter choice number:\t");
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
            printf("\n Enter marks :\n");
            scanf("%f%f%f%f%f",&p,&c,&m,&b,&e);
            break;
         case 3 :
            printf("\n Bye-Bye");
            break;
         case 4 :
            printf("\n Invalid input!");
            break;
        }
        if(op>=1 && op<=1)
        {
            printf("\n Press any key to continue");
            fflush(stdin); getch();
        }
    } while (op!=3);
} 

/****************************  End of Percentage Menu  ********************************/

/************************************************************************************\
*                                  EVEN ODD MENU                                      *
\************************************************************************************/

int num(int a)
{
    return a%2;
}

void eomenu(void)
{
    int op;
    int n=120;
    

    do
    {
        clrscr();

        printf("\n\t\t\t*** Even Odd ***");
        printf("\n\n\t\t\t 1 -> Evaluate");
        printf("\n\t\t\t 2 -> Change Number");
        printf("\n\t\t\t 3 -> Exit\n");
        printf("\n\t\t\t Enter choice number:\t");
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
            printf("\n Enter Number :\n");
            scanf("%d",&n);
            break;
         case 3 :
            printf("\n Bye-Bye");
            break;
         case 4 :
            printf("\n Invalid input!");
            break;
        }
        if(op>=1 && op<=1)
        {
            printf("\n Press any key to continue");
            fflush(stdin); getch();
        }
  
    } while (op!=3);
    
}

/****************************  End of EVEN ODD  Menu  ********************************/

/**************************************************************************************\
*                                  RECTANGLE MENU                                       *
\**************************************************************************************/

float para(float a,float b)
{
    return(2*a +2*b);
}

float arearect(float a,float b)
{
    return a*b;
}

void rectanglemenu(void)
{
    int op;
    float l=2,b=2,p,a;
    do
    {
        clrscr();
        printf("\n\t\t\t*** RECTANGLE ***");
        printf("\n\n\t\t\t 1 -> Calculate and show area");
        printf("\n\t\t\t 1 -> Calculate and show parameter");
        printf("\n\t\t\t 2 -> Change L and B");
        printf("\n\t\t\t 3 -> Exit\n");
        printf("\n\t\t\t Enter choice number:\t");
        scanf("%d",&op);

        switch(op)
        {
         case 1 :
            a=arearect(l,b);
            p=para(l,b);

            printf("\n LENGTH         : %g",l);
            printf("\n Breadth        : %g",b);
            printf("\n Area           : %g",a);
            printf("\n Parameter      : %g",p);
            fflush(stdin); getch();
            break;
         case 2 :
            printf("\n Enter New Values :\n");
            scanf("%f%f",&l,&b);
            break;
         case 3 :
            printf("\n Bye-Bye");
            break;
         case 4 :
            printf("\n Invalid input!");
            break;
        }
        if(op>=1 && op<=1)
        {
            printf("\n Press any key to continue");
            fflush(stdin); getch();
        }
    } while (op!=3);
    
}

/****************************   End of Rectangle Menu  *********************************/

/**************************************************************************************\
*                                  PRIMEPOWER MENU                                      *
\**************************************************************************************/


void primepowermenu()
{
 int pow,value,bk,x;

 printf("\n\t Enter a number:");
 scanf("%d",&value);

 for(x=2,pow=0,bk=value; bk!=1; )
 {
    
  if(bk%x==0)
  {
        bk/=x;
        pow++;
        if(bk==1)
        {
                printf("\n\t %d to power %d",x,pow);
        } 
  }
  else //bk%x==0
  {
        if(pow!=0)
        { 
            printf("\n\t %d to power %d",x,pow);            
            pow=0;
        }
        x++;
  }
  
 }
    printf("\n Press any key to Go back");
    fflush(stdin); getch();
 return;   
}

/**************************   End of Primepower Menu  ********************************/

/************************************************************************************\
*                                  REVERSE MENU                                       *
\************************************************************************************/


void reversemenu()
{
  int val,y,bk;

  printf("\n\t Enter any number :\t");
  scanf("%d",&val);
  bk=val;

  while(bk!=0)
  {
     y=bk%10;
     bk/=10;
     printf("\n%d",y);
  }
   printf("\n Press any key to Go back");
   fflush(stdin); getch(); 
 return;
}

/******************************   End of REVERSE Menu  ********************************/

/************************************************************************************\
*                                 PERFECT SQUARE MENU                                 *
\************************************************************************************/

void perfectmenu()
{
 int num,sum,x,y;

 printf("\n\t Enter a number:\t");
 scanf("%d",&num);

 for(sum=0,x=1,y=0; sum<num; x+=2)
 {
    sum=sum+x;
    y++;
 }

 if(sum==num)
 {
    printf("\n\t Square root of %d is %d",num,y);
    printf("\n\t %d is a perfect square",num);
 }
 else // sum==num
 {
    printf("\n\t %d is a NOT perfect square",num);
 }
  printf("\n Press any key to Go back");
  fflush(stdin); getch();
 return;

}

/*************************** End of Perfect Square Menu  ***************************/


/************************************************************************************\
*                                 PATTERN MENU                                        *
\************************************************************************************/

void pyramidmenu()
{
 int r,c,t;

 for(r=1; r<=5; r++)
 {
    printf("\n");
    for(t=1;t<=5-r;t++)
    printf("\t");
    for(c=r; c>=1; c--)
    {
        printf("\t %d\t",c%2);
    }
 }
  printf("\n Press any key to Go back");
  fflush(stdin); getch();   
 return;   
}

/*****************************   End of Pattern Menu  *****************************/

/************************************************************************************\
*                                 CYCLIC SUM MENU                                     *
\************************************************************************************/

void cyclicmenu()
{
 int bk,val,sm,y;

 printf("\n\t Enter a number:");
 scanf("%d",&val);

 for(bk=val,sm=0; bk!=0; )
 {
    y=bk%10;
    bk/=10;
    sm+=y;

    if(bk==0 && sm>9) // >9 is to show that sum is in 2 digits still.
    {
        bk=sm;
        sm=0;
    }
 }
 printf("\n\t Digits: %d",sm);

 // OR:

 printf("\n\t Value: %d",val);
 y=val%9;
 if(val==0)
 {
    printf("0");
 }
 else if(y==0)
 {
    printf("\n 9 ");
 }
 else
 {
    printf("\n %d ",y);
 }

  printf("\n Press any key to Go back");
  fflush(stdin); getch();        

 return;   
}

/*****************************  End of Cyclic Sum Menu  *******************************/


/************************************************************************************\
*                               FACTOR CALCULATOR MENU                                *
\************************************************************************************/


void factormenu()
{
    int num,x;
    x=1;

    printf("\n\t Enter a number:\t");
    scanf("%d",&num);

    printf("\n\t Factors of the given number are:\n\t");

    while(x<=num)
    {
        if(num%x==0)
        {
            printf("\n\t %d\n",x);
        }
        x=x+1;
    }
    
    printf("\n Press any key to Go back");
    fflush(stdin); getch();        
    return;
}


/*************************  End of factor Calculator Menu  ****************************/


/************************************************************************************\
*                              OUADRANT DETERMINING MENU                              *
\************************************************************************************/




void quadmenu()
{
    float x,y;
    printf("\n enter the value of x and Y :\n");
    scanf("%f%f",&x,&y);

    if(x==0&&y==0)
    {
     printf("\n point falls on origin");
    }
    else //x==0&&y==0
    {
        if(x==0&&y!=0)
        {
        printf("\npoint lies on y axis ");
        }
        else //x==0&&y!=0
        {
            if(x!=0&&y==0)
            {
              printf("\npoint lies on x axis");
            }
            
        }

    }
    if(x>0&&y>0)
    {
        printf("\n lies in first ouad");
    }
    if(x<0&&y>0)
    {
        printf("\n lies in second ouad");
    }
    if(x<0&&y<0)
    {
        printf("\n lies in third ouad");
    }
    if(x>0&&y<0)
    {
        printf("\n lies in fourth ouad");
    }

    
    printf("\n Press any key to Go back");
    fflush(stdin); getch();        
    
    return;

}

/*************************  End of Quadrant Determiner Menu  *************************/

/************************************************************************************\
*                               HCF DETERMINING MENU                                  *
\************************************************************************************/



void hcfmenu()
{
int num1,num2,x,hcf;

/* Getting two numbers for evaluation.*/
printf("\n\t Enter two numbers:");
scanf("%d%d",&num1,&num2);

for(x=1; x<=num1 || x<=num2; x++)
{
if(num1%x==0 && num2%x==0)
hcf=x;
}
printf("\n\t HCF of %d and %d is: %d",num1,num2,hcf);

printf("\n Press any key to Go back");
fflush(stdin); getch(); 
return;   
}

/*************************  End of HCF Determiner Menu  *************************/


/************************************************************************************\
*                               1 TO 10 TABLE MENU                                    *
\************************************************************************************/


void tablemenu()
{
 int r,c,t;

 for(r=1; r<=10; r++)
 {
    printf("\n\t Table of %d \n",r);
    for(c=1; c<=10; c++)
    {
        t=r*c;
        printf("\n\t %d X %d = %d\n",r,c,t);
    }
 }

 printf("\n Press any key to Go back");
 fflush(stdin); getch();    
 return;   
}

/*************************  End of 1 to 10 Table Menu  *************************/


/************************************************************************************\
*                               VOWEL MENU                                            *
\************************************************************************************/


void vowelmenu()
{
    char ch;
    printf("\nEnter an alphabet");
    fflush(stdin); 
    scanf("%c",&ch);
    printf("\n (%c)",ch);
    
    if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("\n\tIt is a vowel: %c",ch); 
    }
    else // capital letters
    {
        printf("\n\tNot a vowel");
    }
    getch();
    return;
}

/*************************  End of Vowel Menu  *************************/


void menu()
{
    int op;

    do
    {
        clrscr();
        printf("\n\t\t\t *** CALCULATION TASK MENU BY TANISH RAI ***");
        printf("\n\n\t\t\t  1  ->  Simple Calculator");
        printf("\n\t\t\t  2  ->  Interest Calculator");
        printf("\n\t\t\t  3  ->  Circle area and circumference");
        printf("\n\t\t\t  4  ->  Percentage of a Student");
        printf("\n\t\t\t  5  ->  Even or Odd");
        printf("\n\t\t\t  6  ->  Rectangle Calculation");
        printf("\n\t\t\t  7  ->  Prime factors and their power");
        printf("\n\t\t\t  8  ->  Reverse of a number");
        printf("\n\t\t\t  9  ->  Perfect Square checking");
        printf("\n\t\t\t  10 ->  Show 1,0 Pyramid");
        printf("\n\t\t\t  11 ->  Show Cyclic Sum");
        printf("\n\t\t\t  12 ->  Calcutaing Factors of given number");
        printf("\n\t\t\t  13 ->  Quadrant Determination");
        printf("\n\t\t\t  14 ->  HCF calculator");
        printf("\n\t\t\t  15 ->  1 to 10 Table");
        printf("\n\t\t\t  16 ->  Vowel determination");
        printf("\n\t\t\t  17 ->  Exit\n");
        printf("\n\t\t\t  Enter choice number:\t");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
            calcmenu();
            break;
            case 2:
            interestmenu();
            break;
            case 3:
            circlemenu();
            break;
            case 4:
            percentmenu();
            break;
            case 5:
            eomenu();
            break;
            case 6:
            rectanglemenu();
            break;
            case 7:
            primepowermenu();
            break;
            case 8:
            reversemenu();
            break;
            case 9:
            perfectmenu();
            break;
            case 10:
            pyramidmenu();
            break;
            case 11:
            cyclicmenu();
            break;
            case 12:
            factormenu();
            break;
            case 13:
            quadmenu();
            break;
            case 14:
            hcfmenu();
            break;
            case 15:
            tablemenu();
            break;
            case 16:
            vowelmenu();
            break;
        }
        fflush(stdin);
    }while(op!=17);
}

int main()
{
    menu();
    return(0);
}

