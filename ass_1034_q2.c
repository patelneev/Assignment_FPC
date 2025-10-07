//Calculate the area of rectangle
#include<stdio.h>
void main()
{
  float l,w,a;
  printf("\n Enter a length of rectangle ");
  scanf("%f",&l);
  printf("\n Enter a width of rectangle ");
  scanf("%f",&w);
      a = l * w ; // Formula to calculate area of rectangle
  printf("\n Area of rectangle =%.2f \n",a);
}
