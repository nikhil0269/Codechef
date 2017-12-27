#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,n,f=0,g;
    //stack<int>s;
    scanf("%d",&t);
    while(t--)
    {
        f=0;
        scanf("%d",&n);
        while(n)
        {
            g=n%10;
            if(g==0&&f==0){n/=10;continue;}
            else f=1;
            printf("%d",g);
            n/=10;
        }
        printf("\n");

    }

    return 0;
}
