#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char a[10];
int main()
{
    int i,j,len,sum,num;
    for(i=0;i<5;i++){
        sum = 0;
        scanf(" %s",a);
        len = strlen(a);
        for(j=0;j<len;j++)
            sum += pow(a[j]-'0',j+1);
        num = atol(a);
        if(sum==num) printf("Y");
        else printf("N");
        }
    return 0;
}
