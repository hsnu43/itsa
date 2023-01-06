#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        double ans;
        ans = a*b;
        ans = ans/2;
        printf("Trapezoid area:%.1f\n",ans);
    }
}
