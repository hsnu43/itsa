#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        double ans;
        ans = (a+b)*c;
        ans = ans/2;
        printf("Trapezoid area:%.1f\n",ans);
    }
}
