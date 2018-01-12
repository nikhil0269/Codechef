#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,n,f=0,g;
    //stack<int>s;
    //How many number you want to reverse e.g 2,3..
    scanf("%d",&t);
    while(t--)
    {
        f=0;
        //Enter the number to be reversed.
        scanf("%d",&n);
        while(n)
        {
            g=n%10;
            if(g==0&&f==0){n/=10;continue;}
            else f=1;
             // the reverse of the Number is:
            printf("%d",g);
            n/=10;
        }
        printf("\n");

    }

    return 0;
}
