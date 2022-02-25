#include<stdio.h>
int main()
{
    int a,m,t=0;
    scanf("%d",&a);
    while(a!=0)
    {
        if(t<a%10)
        t=a%10;
        
        a/=10;
    }
    printf("%d",t);
    return 0;
}
