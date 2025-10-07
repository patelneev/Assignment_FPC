//Find the largest of four numbers
#include <stdio.h>
void main()
{
  int a,b,c,d;
  printf(" Enter a number of a:- ");
  scanf("%d",&a);
  printf(" Enter a number of b:- ");
  scanf("%d",&b);
  printf(" Enter a number of c:- ");
  scanf("%d",&c);
  printf(" Enter a number of d:- ");
  scanf("%d",&d);
  if(a>b && a>c && a>d)
   {
     printf("%d Is a largest number",a);
   }
  else if(b>a && b>c && b>d)
   {
     printf("%d is a largest number",b);
   }
   else if(c>a && c>b && c>d)
   {
     printf("%d is a largest number",c);
   }
   else
    {
      printf("%d is a largest number",d);
    }
}
