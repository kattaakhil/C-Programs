#include <stdio.h>
#include<math.h>
int factor(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n;
    int rem,res=0;
    scanf("%d",&n);
    res=factor(n);
    if(res==n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not an Perfect Number");
    }
    return 0;
}
