//Check whether a number is a prime palindrome
#include<stdio.h>
void main()
{
  int no,i=2,z=0,s=0,no2,no3,a;
  printf("\n Enter any no");
  scanf("%d",&no);
    a=no;
  for(i=2;i<no;i++) // Check divisibility up to no/2
   {
     if(no%i==0)
       {
         z=1;
         printf("\n no is not prime palandrome");
         break;
       }
    }
   if(z==0) // Check if number is palindrome
    {
      while(no>0)
        {
           no2=no%10;
           s=s*10+no2;
           no=no/10;
        }
    if(s==a)
      {
         printf("\n no is prime palandrome");
      }
    }
}
