#include<stdio.h>
void main()
{
  int i,j,a;
  
  printf("\nEnter the value:");
  scanf("%d",&a);
  
  for(i=1;i<=a;i++)
  {
     printf("\n");
     for(j=a-i+1;j>0;j--)
     {
     	
     	if(j%2==0){
     		 printf("0");
		 }
		 else{
		 	printf("1");
		 }
      
     }
  }
  return 0;
}
