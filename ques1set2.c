#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[100000],b[100000],l,k,i,j;
    gets(s);
    l=strlen(s);
    i=0;
    while(s[i]!='\0')
    {j=i;
        while(s[i]!=' ')
        {
         i++;
        }
        for(k=j;k<i;k++)
        {
            b[k]=s[i-j-k-1];
        }
        i++;
    }
    b[i]='\0';
    puts(b);


}
