#include<stdio.h>
int main()
{
    int a,b;

    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int c=0;
        if(a>b)
        {
            for(int i=a;i>=b;i--)
            {
                c+=i;
            }
        }
        else if(a<b)
        {
            for(int i=b;i>=a;i--)
            {
                c+=i;
            }
        }

        printf("%d\n",c);
    }
}

