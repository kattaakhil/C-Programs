/*if the sum of all factors of a number except that number is greater than or equal to that number then it is known as Abundant Number.*/
/* 12-> 1+2+3+4+6= 16(>12) */
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
    if(res>=n)
    {
        printf("Abundant Number");
    }
    else
    {
        printf("Not an Abundant Number");
    }
    return 0;
}
