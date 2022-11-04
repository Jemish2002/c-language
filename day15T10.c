#include<stdio.h>
void main()
{
  int i,j,n;
  
  printf("\nEnter the value:");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
    printf("\n");
    
    for(j=1;j<=i;j++)
    {
      printf(" ");
    }
    for(j=n;j>=i;j--)
    {
      printf("%d",j);
    }
  }
  return 0;
}
