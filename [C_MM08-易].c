#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        a+=b;
        printf("%d\n",a*a);
    }
}
