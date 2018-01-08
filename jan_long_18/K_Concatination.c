#include<stdio.h>

long long int sum(int*a,int n)
{
    int i;
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}

long long int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}

long long int max_sum(int*a,int n)
{
    int i;
    long long int cur_sum=a[0],maxi=a[0];
    for(i=1;i<n;i++)
    {
        cur_sum=max(a[i],a[i]+cur_sum);
        maxi=max(cur_sum,maxi);
    }
    return maxi;
}

int main()
{
    int t,n,k,j,i;
    long long int m=0,total;
    int a[100000];
    int temp[200000];
    scanf("%d",&t);
    while(t--)
    {
        j=0;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            temp[i]=a[i];
        }
        total=sum(a,n);
        m=max_sum(a,n);
        if(total<=0)
        {
            for(i=n;i<2*n;i++)
            {
                temp[i]=a[j++];
            }

            m=max_sum(temp,2*n);
        }
        else{

                m=total*(k-1)+m;
        }

        printf("%lld\n",m);
    }

    return 0;
}
