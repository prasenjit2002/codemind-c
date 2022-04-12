#include<stdio.h>
#include<math.h>
int main()
{
    int a,i=0,j,t,m,l;
    scanf("%d",&a);
    t=pow(a,2);
    j=a;
    while(a!=0)
    {
        i=i*10+a%10;
        a/=10;
    }
    m=pow(i,2);
    l=i;
    int k=0;
    while(m!=0)
    {
        k=k*10+m%10;
        m/=10;
    }
    if(k==t)
    printf("True");
    else
    printf("False");
    return 0;
}