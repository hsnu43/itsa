#include<stdio.h>
int main()
{
    int k;
    double l;
    while(scanf("%d",&k)!=EOF)
    {
        l = 1.6*k;
        printf("%.1lf\n",l);
    }
}
