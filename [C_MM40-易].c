#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s+=i;
        if(i!=n)
        printf("%d + ",i);
        else
            printf("%d = ",i);
    }
    printf("%d\n",s);
}
