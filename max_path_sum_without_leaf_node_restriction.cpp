#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    struct node *l;
    struct node *r;
    int key;
}node;
int ans;
// void prin(node *root)
// {
//  if(root==NULL)
//   return ;

// prin(root->l);
// cout<<root->key<<endl;
// prin(root->r);
// }
int sum(node *root)
{
if(root==NULL) 
return 0;   
int l=sum(root->l);
int r=sum(root->r);
//int ans;
int temp;
temp=max(l,r)+root->key;
ans=max(temp,l+r+root->key);
return temp;
}
int main()
{
    int n, i, k;
    cin >> n;
    cin >> k;
    n = n - 1;
    node *root = new node;
    root->key = k;
    root->l = NULL;
    root->r = NULL;
    queue<node *> q;
    q.push(root);
    for (i = 0; i < q.size(); i++)
    {
        if (n>0)
        {
            node *front = q.front();
            if(n>0)
            {
            if (front->l == NULL)
            {
             //   cout << n << endl;
                cin >> k;
                n--;
                node *left = new node;
                left->l = NULL;
                left->r = NULL;
                front->l = left;
                left->key = k;
                q.push(left);
            }}
            if(n>0)
            {
            if (front->r == NULL)
            {
              //  cout << n << endl;
                cin >> k;
                n--;
                node *right = new node;
                right->l = NULL;
                right->r = NULL;
                front->r = right;
                right->key = k;
                q.push(right);
            }}
        }
        q.pop();
    }

  // prin(root);
//   node *f=root->r;
//  cout<<f->key<<endl;
sum(root);
cout<<ans<<endl;
}