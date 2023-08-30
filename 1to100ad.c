#include<stdio.h>
#include<conio.h>
/* Program: To arrange number between 1 to 100 in ascending and descending order.
*/
int main()
{
 int x;
 x=1;
 printf("\n\tNumbers in ascending order\n\t");
 while(x<=100)
 {
    printf("\n\t %d",x);
    x=x+1;
 }
 
 printf("\n\tNumbers in descending order\n\t");
 x=100;
 while(x>=1)
 {
    printf("\n\t %d",x);
    x=x-1;
 }
 
 printf("\n\tNumbers in ascending order using do..while\n\t");
 x=1;
 do
 {
    printf("\n\t %d",x);
    x=x+1; 
 } while (x<=100);

 printf("\n\tNumbers in descending order using do..while\n\t");
 x=100;
 do
 {
    printf("\n\t %d",x);
    x=x-1;
 } while (x>=1);
 
    return(0);
}