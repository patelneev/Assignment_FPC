//Substract two matricses
#include <stdio.h>
void main()
{
int a[3][3],b[3][3],c[3][3];
int i,j,t;
printf("\n Enter first matrix \n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf(" Enter No ");
scanf("%d",&a[i][j]);
}
}
printf("\n Enter Second matrix \n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf(" Enter No ");
scanf("%d",&b[i][j]);
}
}
printf("\n Substract of two matrics \n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf(" %d ",c[i][j]=a[i][j] - b[i][j]);
}
printf(" \n");
}
}
