#include<stdio.h>

void main()
{
    int i,j,k=1,n;

    printf("Enter the no of lines\n");
    scanf("%d",&n);

    printf("Floyd's Triangle\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%4d", k);
        }

        printf("\n");
    }
}
