// 12 -> 144 -> 441 -> sqrt(441) -> 21 ->12

#include <stdio.h>
#include<math.h>
int rev(int n)
{
    int rem,result=0;
    while(n)
    {
        rem=n%10;
        result=result*10+rem;
        n=n/10;
    }
    return result;
}
int main()
{
    int n,temp,a,b,c,result;
    scanf("%d",&n);
    temp=n;
    a=n*n;
    b=rev(a);
    c=sqrt(b);
    result=rev(c);
    if(result==temp)
    {
        printf("Adam Number");
    }
    else
    {
        printf("Not an Adam Number");
    }
    return 0;
}
