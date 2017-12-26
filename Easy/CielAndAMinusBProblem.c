#include<stdio.h>

int diff(int a,int b)
{
    if(a<b) return b-a;
    else return a-b;
}

int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=diff(a,b);
    if(x%10==9)x--;
    else x++;
    printf("%d",x);
 return 0;
}
