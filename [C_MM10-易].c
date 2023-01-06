#include<stdio.h>
int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        a = a*9/5+32;
        printf("%.1lf\n",a);
    }
}
