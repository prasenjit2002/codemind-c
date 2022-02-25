
#include<stdio.h>
#include<math.h>
int main()
{
    int a,j,s=0,k;
    scanf("%d",&a);
    k=pow(a,2);
    // t=k;
    while(k!=0)
    {
        j=k%10;
        s+=j;
        k/=10;
    }
    if(a==s)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}
