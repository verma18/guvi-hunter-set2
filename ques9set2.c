#include<stdio.h>
#include<Stdlib.h>
void main()
{
    int n,k,i,j,max;
    scanf("%d %d",&n,&k);
    struct one{
    int a[k];

    }b[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
            scanf("%d",&b[i].a[j]);


    }
    max=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(max<b[i].a[j])
                max=b[i].a[j];
        }
    }
    max++;
    int c[max];
    for(i=0;i<max;i++)
        c[i]=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<k;j++)
       {
           c[b[i].a[j]]=c[b[i].a[j]]+1;
       }
   }
   for(i=0;i<max;i++)
   {
       if(c[i]==n)
       {
           printf("%d",i);
           break;

       }

   }
   if(i==max)
    printf("no");
}
