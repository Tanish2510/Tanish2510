#include <stdio.h>
int main ()
{
    int num1,num2;
    char oper;
    
    printf("enter your first number : \n");
    scanf("%d",&num1);
    
    printf("enter your second number : \n");
    scanf("%d",&num2);
    
    printf("enter the sign of operator as :\nfor finding addition '+'\nfor finding difference '-'\nfor finding product '*'\nfor finding the quotient when we divide number 1 by number 2 '/'\nfor finding the remainder when we divide number 1 by number 2 ''\n");
    scanf(" %c", &oper);
    
    
    if (oper == '+')
    {
        printf("addition of both the number which you entered is %d",num1+num2);
    }
    
    else if (oper == '-')
    {
        printf("difference of both the number which you entered is %d",num1-num2);
    }
    
    else if (oper == '*')
    {
        printf("product of both the number which you entered is %d",num1*num2);
    }
    
    else if (oper == '/')
    {
        printf(" quotient is %d when we divide number 1 by number 2",num1/num2);
    }
    
    else if (oper == '%')
    {
        printf("remainder is %d when we divide number 1 by number 2",num1%num2);
    }
    
    else
    {
        printf("invalid operation\nplease select a valid operation");
    }
    
    return 0;
}