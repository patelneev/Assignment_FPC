//Find the second largest element in an array
#include <stdio.h>
void main()
{
int a[10]={5,3,7,9,1,12,15,6,4,10};
int i,j,t;
for(i=0;i<=9;i++)
{
for(j=0;j<=9;j++)
{
if(a[i] > a[j]) // If next element is greater, swap them
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<=9;i++)
{
printf("\n %d",a[i]);
}
printf("\n Second largest number in array is %d \n",a[1]);
}
