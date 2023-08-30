#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("\n\tenter five numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    // 12 13 14 11 7 
    if(a>=b)
    {
      if(a>=c)
      {
        if(a>=d)
        {
          if(a>=e)
          {
            printf("a is the largest");
          }
          else //(a>=e)
          {
            printf("e is the greatest");
          }

        }
        else // a>=d
        {

        }
      }
    }
    else //(a>=b)
    {
       if(b>=c)
       {
        if(b>=d)
        {
          if(b>=e)
          {
            printf("b is the largeest");
          }
          else //(b>=e)
          {
            printf("e is the largest");
          }
        }
       }
       else //(b>=c)
       {
         if(c>=d)
         {
            if(c>=e)
            {
                printf("c is the largest");
            }
            else //(c>=e)
            {
                printf("e is the largest");
            }
         }
         else //(c>=d)
         {
            if(d>=e)
            {
                printf("d is the largest");
            }
            else //(d>=e)
            {
                printf("e is the largest");
            }
         }
       } 
    }
 return(0);   
}