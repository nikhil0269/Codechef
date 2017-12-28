#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

long int diff(long int a,long int b)
{
    long int d=a-b;
    if(d<0)return -d;
    else return d;
}

int main()
{
    int t,i,n,j;
    long int min=INT_MAX,d,s[10000];
    scanf("%d",&t);
    while(t--)
    {
        min=INT_MAX;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld",&s[i]);
        }

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                d=diff(s[i],s[j]);
                if(d<min)min=d;
            }
        }
        printf("%ld\n",min);
    }
    return 0;
}
