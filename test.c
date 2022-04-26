#include <stdio.h>
#include <string.h>
char str[100][100];
int main(int argc, char const *argv[])
{

    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        gets(str[i]);

    for (i = 0; i < n; i++)
        printf("%s\n",str[i]);
}
