#include<stdio.h>
int main()
{
    int n,a1,b1,a2,b2;
    char c;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
           scanf(" %c %d %d %d %d",&c,&a1,&b1,&a2,&b2);
           if(c=='-')
            printf("%d %d\n",a1-a2,b1-b2);
           else if(c=='+')
            printf("%d %d\n",a1+a2,b1+b2);
           else if(c=='*')
            printf("%d %d\n",a1*a2-b1*b2,a1*b2+b1*a2);
        }
    }
}
