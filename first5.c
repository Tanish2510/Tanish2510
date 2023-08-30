#include<stdio.h>
#include<conio.h>
/* program: to find flat discount given by the shop.
*/
int main()
{
  int a,n1,n2,f,net;
  
  printf("enter amount given by coustemer\n");
  scanf("%d",&a);
  
  printf("enter discounts given by shop\n");
  scanf("%d%d",&n1,&n2);
  
  f=a-(a/100*n1);
  
  net=f-(f/100*n2);
  
  printf("\n\tfirst discount N1: %d",n1);
  printf("\n\tsecond discount N2: %d",n2);
  printf("\n\tfirst discounted price: %d",f);
  printf("\n\tnet discounted price: %d",net);
  
  return(0);
}