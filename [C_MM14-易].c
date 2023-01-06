#include<stdio.h>
int main()
{
    int a,d,h,m;
    while(scanf("%d",&a)!=EOF)
    {
        d = a/86400;
        a = a%86400;
        h = a/3600;
        a = a%3600;
        m = a/60;
        a = a%60;
        printf("%d days\n%d hours\n%d minutes\n%d seconds\n",d,h,m,a);
    }
}
