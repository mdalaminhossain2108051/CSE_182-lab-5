#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(j=2;j<=n;j++)
    {
        for(i=2;i<=j;i++)
        {
            if(j%i==0)
                break;
        }
        if(j==i)
        {
            printf("%d\t",i);
            sum=sum+i;
        }


    }
    printf("\nThe sum of all prime number=%d",sum);
}
