#include<stdio.h>
void main()
{
  int i,j,n;
  
  printf("\nEnter the value:");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
    printf("-\n");
    for(j=n-i;j<=n;j++)
    {
      printf("|");
    }
  }
  return 0;
}

