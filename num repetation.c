#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int n,a,i;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==a)
        {
            count++;
        }
    }if(count>0)
    {
    printf("Coin %d is present in the collection %d times",a,count);
        
    }
    
    else
    {
    printf("Coin %d is not present in the collection",a);
    }
}
