#include<bits/stdc++.h>
using namespace std;

int searchL(long int A[],int n,long int data)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(A[i]==data)return i;
    }
}

int main()
{
    int t,n,i;
    long int data,A[101];
    //vector<long int>v;
    long int k;
cin>>t;
while(t--)
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    cin>>k;
    data=A[k];;
    sort(A+1,A+n+1);
    cout<<searchL(A,n,data)<<endl;


}
return 0;
}
