#include<stdio.h>
int main()
{
    int n,r,k,s=0 ;
    printf("Enter any number:");
    scanf("%d",&n);
    k=n;
    while (n!=0)
    {
        r=n%10;
        printf("%d",r);
        s=(s*10)+r;
        n=n/10;
    }
    if(s==k)
    {
        printf("\nThe number is palindrome");
    }

    else
    {
        printf("\nThe number isn't palindrome");
    }
    return 0;

}
