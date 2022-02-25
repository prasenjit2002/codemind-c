
#include<stdio.h>
int main()
{
    int a,j,i,s=0,p=1;
    scanf("%d",&a);
    while(a!=0)
    {
        j=a%10;
        s+=j;
        p*=j;
        a/=10;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
}
