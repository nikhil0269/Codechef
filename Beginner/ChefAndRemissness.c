#include<stdio.h>
int max(int a,int b)
{
    if(a<b)return b;
    else return a;

}
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int t,a,b,minv,maxv;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        printf("%d %d\n",max(a,b),sum(a,b));
    }


    return 0;
}
