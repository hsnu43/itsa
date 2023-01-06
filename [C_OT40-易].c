#include<stdio.h>
int main()
{
    int a,b,c;

    while(scanf("%d\n%d\n%d",&a,&b,&c)!=EOF)
    {
        if(a+b>c&&a+c>b&&b+c>a)
        {
            printf("Bigger than the third side\n");
        }
        else
            printf("Less than the third side\n");
    }
}

