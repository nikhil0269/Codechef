#include<bits/stdc++.h>
#include<string>
using namespace std;

char postfix[401];

int priority(char ch)
{
    switch(ch)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case'/':
        return 2;
    case '^':
        return 3;
    }
}

int main()
{
    int t,i,len,k;
    char ch;
    stack<char>s;
    char str[401];
    scanf("%d",&t);
    while(t--)
    {
        k=-1;
        scanf("%s",str);
        memset(postfix,0,401);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            switch(str[i])
            {
            case '(':
                s.push(str[i]);
                break;

            case ')':
                do
                {
                    ch=s.top();
                    s.pop();
                    if(ch!='(')
                    {
                        postfix[++k]=ch;
                    }
                    else break;
                }while(1);
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while(priority(str[i])>=priority(s.top())&&!s.empty())
                {
                    ch=s.top();
                    s.pop();
                    postfix[++k]=ch;
                }
                s.push(str[i]);
                break;
            default:
                postfix[++k]=str[i];


        }

        }
        postfix[++k]='\0';
        printf("%s\n",postfix);

    }
return 0;
}
