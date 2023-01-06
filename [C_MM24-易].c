#include<stdio.h>
int main()
{
    int a,b;

    while(scanf("%d %d",&a,&b)!=EOF)
    {
        double s=0;
        if(a>120)
        {
            s+=60*b;
            a = a-60;
            s+=60*b*1.33;
            a-=60;
            s+=a*b*1.66;
        }
        else if(a>60)
        {
            s+=60*b;
            a-=60;
            s+=a*b*1.33;
        }
        else if(60>=a>0)
        {
            s+=a*b;
        }
        printf("%.1lf\n",s);
    }
}

