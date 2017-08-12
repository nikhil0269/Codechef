#include<stdio.h>
long long int arr[100000];
int main()
{
int T,N,i,j,flag=0,D;
long long int sum,avg,d,count;

scanf("%d",&T);
while(T--)
{
sum=0;flag=0,count=0;
scanf("%d%d",&N,&D);
for(i=0;i<N;i++)
{
scanf("%lld",&arr[i]);
sum=sum+arr[i];
}
if(sum%N!=0)
{
printf("%d\n",-1);
continue;
}
avg=sum/N;
for(i=0,j=D;j<N;i++,j++)
{
if(avg<=arr[i])
{
d=arr[i]-avg;
arr[i]-=d;
arr[j]+=d;
}
else
{
d=avg-arr[i];
arr[i]+=d;
arr[j]-=d;
}
count+=d;
}
for(i=0;i<N-1;i++)
{
if(arr[i]!=arr[i+1])
{
flag=1;break;
}
}
if(flag==1) printf("%d\n",-1);
else
{
printf("%lld\n",count);
}
}
return 0;
}
