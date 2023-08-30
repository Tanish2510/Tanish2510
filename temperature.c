/*
 * C program to perform temperature conversion using switch case
 */
 
#include<stdio.h>
#include<conio.h>
 
int main()
{
    float Celsius, Kelvin, Fahrenhiet;
    int choice;
    printf("Choose the unit you want to convert: \n");
    printf("1.Kelvin\n");
    printf("2.Celsius\n");
    printf("3.Fahrenhiet \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the temperature in kelvin: ");
        scanf("%f",&Kelvin);
        Celsius = (Kelvin - 273.15);
        Fahrenhiet = 1.8 *(Kelvin -273.15) + 32.0;
        printf("In Celsius the value is:\t %f °C \n",Celsius);
        printf("In Fahrenhiet the value is:\t %f °F",Fahrenhiet);
        break;
    case 2:
        printf("Enter the temperature in Celsius: ");
        scanf("%f",&Celsius);
        Kelvin = (Celsius + 273.15);
        Fahrenhiet = (Celsius * 1.8) + 32.0;
        printf("In kelvin the value is : %f K \n",Kelvin);
        printf("In Fahrenhiet the value is: %f °F",Fahrenhiet);
        break;
    case 3:
        printf("Enter the temperature in fahrenhite: ");
        scanf("%f",&Fahrenhiet);
        Kelvin = (Fahrenhiet - 32.0) * 5/9 +273.15;
        Celsius = (Fahrenhiet - 32.0) * 5/9;
        printf("In Celsius the value is :\t %f °C \n",Celsius);
        printf("In Kevlin the value is :\t %f K\n",Kelvin);
        break;
    default:
        printf("Please! enter a valid value \n");
        break;
    }
    printf("\n\n");
    return 0;
}