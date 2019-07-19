/* if the number is splitted into bits and calculate the factorial of each bit and add them,
then the sum is equal to n then it is known as Strong Number. */
// 145 = 1! + 4! + 5! = 145

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
