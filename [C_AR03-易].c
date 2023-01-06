#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,l=0;
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        printf("%d\n",a*a*a+b*b*b+c*c*c+d*d*d+e*e*e+f*f*f);
    }

}
