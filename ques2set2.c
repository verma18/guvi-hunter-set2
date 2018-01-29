#include<stdio.h>
void main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n],i,j,temp;
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
    printf("%d",arr[k-1]);
}
