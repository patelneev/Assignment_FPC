//Compute the sum of digit of a number
#include<stdio.h>
void main()
{
int a,sum=0,b;
printf("Enter a value of a ");
scanf("%d",&a);
while(a>0)
 {
   b = a % 10 ; // Extract the last digit of the number
   sum = sum + b ; // Add the extracted digit to 'sum'
   a = a / 10 ; // Remove the last digit from 'a'
 } 
printf("\n Sum of numbers = %d",sum);
}

