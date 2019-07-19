#include <stdio.h>
#include<math.h>

int main()
{
    int rem,temp,n,res=0,count=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=temp;
    while(n)
    {
        rem=n%10;
        res=res+pow(rem,count);
        n=n/10;
    }
    if(res==temp)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}