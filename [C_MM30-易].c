#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(isprime(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
int isprime(int k)
{
    if(k==1)
        return 0;
    else
        for(int i=2;i<k;i++)
    {
        if(k%i==0)
            return 0;
    }
    return 1;
}
