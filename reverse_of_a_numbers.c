#include<stdio.h>
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        n/=10;
        t=((t*10) +i);
    }
    printf("%d",t);
    return 0;
}
