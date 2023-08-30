/*
 * C program to perform temperature conversion using switch case
 */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void clrscr()      
{
    system("cls");
    return;
}
 
int main()
{
    float Celsius, Kelvin, Fahrenhiet;
    int choice;
    
    do
    {
     
      clrscr();
      printf("Choose the unit you want to convert: \n");
      printf("\n\t\t\t 1 -> Kelvin");
      printf("\n\t\t\t 2 -> Celsius");
      printf("\n\t\t\t 3 -> Fahrenhiet");
      printf("\n\t\t\t 4 -> EXIT\n\t\t\t");
      scanf("%d", &choice);
     
      switch (choice)        
      {
         case 1:
             printf("Enter the temperature in kelvin: ");
             scanf("%f",&Kelvin);
             Celsius = (Kelvin - 273.15);
             Fahrenhiet = 1.8 *(Kelvin -273.15) + 32.0;
             printf("In Celsius the value is:\t %f \n",Celsius);
             printf("In Fahrenhiet the value is:\t %f",Fahrenhiet);
         break;
         case 2:
             printf("Enter the temperature in Celsius: ");
             scanf("%f",&Celsius);
             Kelvin = (Celsius + 273.15);
             Fahrenhiet = (Celsius * 1.8) + 32.0;
             printf("In kelvin the value is : %f \n",Kelvin);
             printf("In Fahrenhiet the value is: %f",Fahrenhiet);
         break;
         case 3:
             printf("Enter the temperature in fahrenhite: ");
             scanf("%f",&Fahrenhiet);
             Kelvin = (Fahrenhiet - 32.0) * 5/9 +273.15;
             Celsius = (Fahrenhiet - 32.0) * 5/9;
             printf("In Celsius the value is :\t %f \n",Celsius);
             printf("In Kevlin the value is :\t %f \n",Kelvin);
         break;
         default:
             printf("Please! enter a valid value \n");
         break;
     }
         if(choice>=1 && choice<=3)
         {
             printf("\n Press any key to continue");
             fflush(stdin); getch();
         }

    } while(choice!=4);
    
    printf("\n\n");
    
    return(0);
}