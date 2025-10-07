//Add two matrices
#include <stdio.h>
void main()
{
  int a[3][3], b[3][3], sum[3][3];
  int i, j, r, c;
  printf("\n Enter first matrix \n");
  for(i = 0; i <= 2; i++)
    {
      for(j = 0; j <= 2; j++)
       {
         printf(" Enter a no");
         scanf("%d", &a[i][j]);
       }
    }
    printf("\n Enter second matrix:\n");
    for(i = 0; i <= 2; i++)
      {
         for(j = 0; j <= 2; j++)
            {
              printf(" Enter a no");
              scanf("%d", &b[i][j]);
             }
      }
    for(i = 0; i <= 2; i++)
      {
         for(j = 0; j <= 2; j++) 
           {
             printf(" %d ",sum[i][j] = a[i][j] + b[i][j]); //Addition Formula
           }
        printf("\n");
      }
}
