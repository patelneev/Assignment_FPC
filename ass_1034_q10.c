//Check whether a number is strong
#include<stdio.h>
void main()
{
  int no,f=1,s=0,no1,no2;
  printf("\n Enter any no");
  scanf("%d",&no);
  no2=no;
  while(no>0)
   {
     no1=no%10;
     f=1;
     while(no1>0)
       {
         f=f*no1;
         no1--;
       }
    printf(" %d ",f);
    s=s+f;
    no=no/10;
    }
    if(no2==s)
     {
       printf("\n No is strong");
     }
    else
     {
       printf("\n No is not strong");
     }
}
