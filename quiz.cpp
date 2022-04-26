#include <bits/stdc++.h>
using namespace std;

typedef struct A{
    int val,idx,cnt;
    char num;
    A *right, *left;
} node;

node *head, *run, *use, *nl, *nr,*temp;

node *newnode(char num)
{
    node *p;
    p = (node*)malloc(sizeof(node));
    p->num = num;
    p->left = p->right = NULL;
    return p;
}

int main()
{
    int i;
    head = newnode('a');
    run = head;

    for(i=1;i<=25;i++)
    {
        use = newnode('a'+i);
        run->right = use;
        use->left = run;
        run = use;

    }
    use = newnode('s');
    //add s
    run = head->right;
    use->right = run->right;
    run->right->left = use;
    run->right = use;
    use ->left = run;
    //remove c
    run = use;
    use = run->right;
    use->right->left = run;
    run->right = use->right;
    //remove z
    run = head;
    while(run != NULL){
        printf("%c ",run->num);
        nr = run->left;
        run = run-> right;
    }
    printf("\n");
    nl = head-> right;
    temp = nr->right;
    temp ->left = nl->right;
    nl->left->right = temp;
    run = head;
    while(run != NULL){
        printf("%c ",run->num);
        run = run-> right;
    }
    return 0;
}
