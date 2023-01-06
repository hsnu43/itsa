#include<stdio.h>
int main()
{
    int a;

    while(scanf("%d",&a)!=EOF)
    {
        isarm(a);
    }
}
void isarm(int n)
{
    int a,b,c,m;
    m = n;
    c=m%10;
    m/=10;
    b = m%10;
    m/=10;
    a = m;
    if((a*a*a+b*b*b+c*c*c)==n)
        printf("Yes\n");
    else
        printf("No\n");
}
