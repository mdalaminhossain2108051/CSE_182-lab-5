#include<stdio.h>
int main()
{
    int i,j,n,sum=0,r,k;
    printf("Enter the value:");
    scanf("%d",&n);
    k=n;
    while(n)
    {
        i=j=1;
        r=n%10;
        while(i<=r)
              {
                  j=j*i;
                  i++;
              }
                sum=sum+j;
                n=n/10;

    }
    if(sum==k)
    {
        printf("The number is strong");
    }
    else
    {
        printf("The number isn't strong");
    }
    return 0;
}
