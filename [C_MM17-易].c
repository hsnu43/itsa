#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        hcf(a,b);
    }
}
void hcf(int a,int b)
{
    while(a>0&&b>0)
    {
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    if(a==0)
        printf("%d\n",b);
    else
        printf("%d\n",a);
}
