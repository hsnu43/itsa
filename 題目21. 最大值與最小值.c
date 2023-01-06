#include<stdio.h>
int main()
{
    float a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    sort(a);
    printf("maximum:%.2f\nminimum:%.2f\n",a[9],a[0]);
}
void sort(float a[])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                float temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
