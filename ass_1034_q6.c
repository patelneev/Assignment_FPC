//Compute the GCD (Greatest Common Divisor) of two numbers
#include <stdio.h>
void main()
{
int a, b;
printf("\n Enter two numbers: ");
scanf("%d ",&a);
printf("\n Enter two numbers: ");
scanf("%d ",&b);
while(a != b)
{
if(a > b)
{
a=a-b; // Subtract smaller from larger
}
else
{
b=b-a;
}
}
printf("GCD = %d", a);
}
