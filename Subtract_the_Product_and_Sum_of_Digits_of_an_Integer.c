
#include<stdio.h>
int main()
{
    int a,i,sum=0,mul=1,j,t;
    scanf("%d",&a);
    t=a;
    while(1)
    {
        i=a%10;
        mul*=i;
        a=a/10;
        if(a==0)
        break;
    }
    while(1)
    {
        i=t%10;
        sum+=i;
        t=t/10;
        if(t==0)
        break;
    }
    j=mul-sum;
    printf("%d",j);
    return 0;
}
