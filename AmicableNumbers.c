// Given two numbers a and b, calculate a_factors_sum, b_factors_sum
//a_factors_sum=b and b_factors_sum=a
//then they are called Amicable Numbers.


#include <stdio.h>
#include<math.h>
int factor(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if((n%i)==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{
    int n,n1;
    int a,b;
    scanf("%d %d",&n,&n1);
    a=factor(n);
    b=factor(n1);
    if(a==n1 && b==n)
    {
        printf("Amicable Numbers");
    }
    else
    {
        printf("Not Amicable Numbers");
    }
    return 0;
}

