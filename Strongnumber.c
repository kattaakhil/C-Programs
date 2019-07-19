#include <stdio.h>
#include<math.h>
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n,n1;
    int rem,res=0;
    scanf("%d",&n);
    n1=n;
    while(n)
    {
        rem=n%10;
        res=res+fact(rem);
        n=n/10;
    }
    if(res==n1)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }
    return 0;
}
