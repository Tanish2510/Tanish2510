#include<stdio.h>
#include<conio.h>
// by tanish rai
/* program: to find net payable amount by coustmer.
*/
int main()
{
   float x,org,net;
    
    printf("\n\tenter amount given by coustemer");
    scanf("%f",&x);
   
    printf("\n\tamount given:%.2f",x);
    org=x-(x/100.0*20);
   
    printf("\n\toriginal discount:%.2f",org);
   
    printf("\n\tif cash is given");
   
    net=org-(org/100.0*5);
    
    printf("\n\tnet amount to be paid:%.2f",net);
   
   return(0);

}
