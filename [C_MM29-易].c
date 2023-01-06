#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        a-=1;
        while(!isprime(a))
        {
            a--;
        }
        printf("%d\n",a);
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
