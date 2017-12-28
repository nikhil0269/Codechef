#include<stdio.h>

int main()
{
    int t,i,n,m,flag,com;
    int hash[1001];
    scanf("%d",&t);
    while(t--)
    {
        flag=0;
        memset(hash,0,1001*sizeof(int));
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&com);
            hash[com]=1;
        }
        for(i=1;i<=n;i++)
        {
            if(hash[i]==0)
            {
                if(flag==0)
                {
                    hash[i]=2;
                    flag=1;
                }
                else{
                    hash[i]=3;
                    flag=0;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            if(hash[i]==2) printf("%d ",i);
        }
        printf("\n");
        for(i=1;i<=n;i++)
        {
            if(hash[i]==3) printf("%d ",i);
        }
        printf("\n");

    }

    return 0;
}
