#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    a=arr[0];
    b=arr[1];
    for(int i=2; i<n; i++)
    {
        if(arr[i]>a)
        {
            b=a;
            a=arr[i];
        }
        else if(arr[i]>b&&arr[i]!=a)
        {
            b=arr[i];
        }
    }
    printf("%d",b);
}
