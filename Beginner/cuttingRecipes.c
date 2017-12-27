#include<stdio.h>
#include<limits.h>
int min(int a[],int n)
{
    int i,min=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)min=a[i];
    }
    return min;
}

int main()
{
    int t,j,i,n,flag=0;
    int a[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(j=min(a,n);j>1;j--)
        {
            flag=0;
            for(i=0;i<n;i++)
            {
                if(a[i]%j!=0){flag=1;break;}

            }
            if(flag==0)break;
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]/j);
        }
        printf("\n");
    }

    return 0;
}
