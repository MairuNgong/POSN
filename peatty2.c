#include <stdio.h>
#include <string.h>

char a[120];
int main()
{
    int i,len,j;
    char r = 'N';
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i] == 'N')
        {
            while(r!='N')
            {
                printf("R");
                if(r=='E') r='S';
                else if(r=='S') r='W';
                else if(r=='W') r ='N';
            }
            printf("F");
        }
        else if(a[i] == 'S')
        {
            while(r!='S')
            {
                printf("R");
                if(r=='W') r='N';
                else if(r=='N') r ='E';
                else if(r=='E') r ='S';
            }
            printf("F");
        }
        else if(a[i] == 'E')
        {
            while(r!='E')
            {
                printf("R");
                if(r=='S') r ='W';
                else if(r=='W') r ='N';
                else if(r=='N') r ='E';
            }
            printf("F");
        }
        else if(a[i] == 'W')
        {
            while(r!='W')
            {
                printf("R");
                if(r=='N') r ='E';
                else if(r=='E') r ='S';
                else if(r=='S') r ='W';
            }
            printf("F");
        }
        else
        {
            printf("Z");
            r = 'N';
        }

    }
    return 0;
}
