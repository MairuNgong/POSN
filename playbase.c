#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[100],b[100],c[100];

int main()
{
    int x,lena,lenb,i,suma = 0, sumb = 0,temp,k=0;
    scanf("%d %s %s",&x,a,b);
    lena = strlen(a);
    for(i=0;i<lena;i++)
    {
        suma*=x;
        if(isdigit(a[i]))
            suma+=(a[i]-'0');
        else
            suma+=(a[i]-'A'+10);
    }
    lenb = strlen(b);
    for(i=0;i<lenb;i++)
    {
        sumb*=x;
        if(isdigit(b[i]))
            sumb+=(b[i]-'0');
        else
            sumb+=(b[i]-'A'+10);
    }
    int sum = suma+sumb;
    printf("%d\n",sum);
    i = 0;
    while(sum > 0)
    {
        temp = sum%x;
        if(temp>=10)
            c[i++] = temp - 10 + 'A';
        else
            c[i++] = temp + '0';
        sum /= x;
    }
    for(i--;i>=0;i--)
        printf("%c",c[i]);
    printf("\n");
    return 0;
}
