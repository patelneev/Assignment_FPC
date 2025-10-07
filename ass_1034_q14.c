//Calculate the perimeter of a rectangle
#include <stdio.h>
void main()
{
int l,b,p;
printf("Enter length of rectangle: ");
scanf("%d", &l);
printf("Enter breadth of rectangle: ");
scanf("%d", &b);
p = 2 * (l+b); // Formula for perimeter
printf("\n Perimeter of rectangle = %d \n", p);
}
