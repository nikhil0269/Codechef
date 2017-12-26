#include<stdio.h>


int main()
{
    int t,n,i,g,c;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        while(n)
        {
            g=n%10;
            n/=10;
            if(g==4) c++;
        }
        printf("%d\n",c);
    }

    return 0;
}
