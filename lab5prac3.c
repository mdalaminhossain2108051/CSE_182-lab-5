#include<stdio.h>
int main()
{
    int n1,n2,greater;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        greater=n1;
    }
    else
    {
        greater=n2;
    }
    while(1)
    {
        if(greater%n2==0 && greater%n1==0)
        {
          printf("LCM of %d and %d is=%d",n1,n2,greater);
          break;
        }
        greater++;
    }
    return 0;
}
