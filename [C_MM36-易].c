#include<stdio.h>
int main()
{
    int s;
    while(scanf("%d",&s)!=EOF)
    {
        if(3<=s&&s<=5)
            printf("Spring\n");
        else if(6<=s&&s<=8)
            printf("Summer\n");
        else if(9<=s&&s<=11)
            printf("Autumn\n");
        else if(s==12||s==1||s==2)
            printf("Winter\n");
    }
}
