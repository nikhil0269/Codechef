#include<stdio.h>

void printArray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
}

int main()
{
    int hash[1001];
    //int m_array[1000];
    int chef_job[1000];
    int assis_job[1000];
    int x,t,n,m,i,assis,chef,last;
    scanf("%d",&t);
    while(t--)
    {
        memset(hash,0,1001);
        chef=0;assis=0;last=0;
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
          scanf("%d",&x);
          hash[x]=1;
        }
        for(i=1;i<=n;i++)
        {
            if(hash[i]==0)
            {
                if(last==0)
                {
                    chef_job[chef++]=i;
                    last=1;
                }
                else if(last==2)
                {
                    chef_job[chef++]=i;
                    last=1;
                }
                else if(last==1)
                {
                    assis_job[assis++]=i;
                    last=2;
                }
            }
        }
        printArray(chef_job,chef);
        printf("\n");
        printArray(assis_job,assis);
        printf("\n");
    }

    return 0;
}
