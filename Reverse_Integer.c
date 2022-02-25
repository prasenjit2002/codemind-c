
#include<stdio.h>
int main()
{
    int i,a,s=0,t;
    scanf("%d",&a);
    t=a;
    if(a>=0)
    {while(a!=0)
        {
        i=a%10;
        a/=10;
        s=i+s*10;
        }
    }
    else{
        a=(-a);
        while(a!=0)
        {
        i=a%10;
        a/=10;
        s=i+s*10;
        }
    }
    if(t>=0)
    printf("%d",s);
    else
    printf("%d",-s);
    return 0;
}
