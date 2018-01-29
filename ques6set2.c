#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,arr[n],j,temp;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(k==arr[i])
            break;
    }
    if(i==0)
        printf("%d %d %d",arr[i+1],arr[i+2],arr[i+3]);
    else if(i==n-1)
        printf("%d %d %d",arr[i-1],arr[i-2],arr[i-3]);
    else{
        printf("%d %d ",arr[i-1],arr[i+1]);
        if(abs(k-arr[i-2])<=abs(k-arr[i+2]))
            printf("%d",arr[i-2]);
        else
            printf("%d",arr[i+2]);

    }

}
