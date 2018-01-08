#include<stdio.h>


long long int max(long long int*a,int n,long long int mm)
{
long long int m=0,i;
for(i=0;i<n;i++)
{
if(*(a+i)>m&&*(a+i)<mm) m=*(a+i);
}
return m;
}

int main()
{
int t,n,i,j,flag=0;
long long int m=10000000000,sum=0,g;
long long int a[700][700];
scanf("%d",&t);
while(t--)
{
flag=0;sum=0;m=10000000000;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%lld",&a[i][j]);
}
}

m=max(*(a+n-1),n,m);         //get maximum value of a row
sum=m;
for(i=n-2;i>=0;i--)
{
g=max(*(a+i),n,m);
if(g==0)
{
flag=1;break;
}
sum+=g;
m=g;
}
if(flag==1)printf("%d\n",-1);
else
{
printf("%lld\n",sum);
}

}

return 0;
}

