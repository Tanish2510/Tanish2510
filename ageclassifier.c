#include<stdio.h>
#include<conio.h>
/* Program: To find the age group of the user.
*/
int main()
{
  int age;

  printf("\n\t Please enter your age:\n\t");
  scanf("%d",&age);

  printf("\n\t Age of person:\t%d",age);

  if(age<=1)
  {
    printf("\n\t person is infant");
  }
  else //age<=1
  {
      if(age<13)
      {
        printf("\n\t person is a child");
      }
      else //age<13
      {
         if(age==13 || age<20)
         {
           printf("\n\t person is a teenager");
         }
         else //age==13||age<20
         printf("\n\t person is an adult");
      }
  }
    return(0);
}