#include<stdio.h>
int arr[1000];
int main()
{

int T,N,i,j,last,flag=0;
scanf("%d",&T);
while(T--)
{
flag=0;
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&arr[i]);
}

i=0;j=N-1;
last=arr[0];
while(j>=i)
{
if((arr[j]==arr[i])&&((arr[i]==last)||(arr[i]==(last+1))))
{
last=arr[i];
i++;
j--;
}
else
{
flag=1;break;
}
}

if(flag==1) printf("no\n");
else printf("yes\n");

}

return 0;
}
