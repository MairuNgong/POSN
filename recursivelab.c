#include <stdio.h>
int fac(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d factorial  is : %d",n,fac(n));

    return 0;
}

int fac(int n)
{
    int result = 1;
    int i;
    for(i = n;i>0;i--)
        result *= i;
    return (result);
}
