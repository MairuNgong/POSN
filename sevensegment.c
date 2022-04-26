#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[1000][5];
char ansa[1010];
char ansb[1010];
char b[1000][5];
char num1[5][5] = {"   ","  |","  |"};
char num2[5][5] = {" _ "," _|","|_ "};
char num3[5][5] = {" _ "," _|"," _|"};
char num4[5][5] = {"   ","|_|","  |"};
char num5[5][5] = {" _ ","|_ "," _|"};
char num6[5][5] = {" _ ","|_ ","|_|"};
char num7[5][5] = {" _ ","  |","  |"};
char num8[5][5] = {" _ ","|_|","|_|"};
char num9[5][5] = {" _ ","|_|"," _|"};
char num0[5][5] = {"   ","| |","|_|"};

int play(int len, int state)
{
    int i,j;
    if(state == 1)
    {
            for(j=0;j<3;j++)
                if(strncmp(a,num1,3)==0);
    }
}


int main()
{
    int m,n,i,j,len,state,ansa,ansb;
    scanf("%d%d",&m,&n);
    gets(a[0]);
    gets(a[1]);
    gets(a[2]);
    len = strlen(a[0]);
    state = 1;
    play(len,state);
    return 0;
}
