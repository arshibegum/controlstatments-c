#include<stdio.h>
int main()
{
    int a,b,m,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=a*i;
        if(m%b==0)
        {
          printf("%d",(a*b)/m);
           break;
        }
    }
}