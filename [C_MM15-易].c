#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a>100||b>100)
            printf("outside\n");
        else
            printf("inside\n");
    }
}
