/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

struct node
{
	int key;
	struct node *left,*right;
};

node* newNode(int data)
{
	node* tmp=new node;
	tmp->key=data;
	tmp->left=NULL;
	tmp->right=NULL;

	return tmp;
}

node* insert(node* root,int key)
{
	node* newnode=newNode(key);
	node* x=root;
	node* y=NULL;

	while(x!=NULL)
	{
		y=x;
		if(key<x->key)
		{
			x=x->left;
		}
		else
		{
			x=x->right;
		}
	}
	if(y==NULL)
	{
		y=newnode;
	}
	else if(key<y->key)
	{
		y->left=newnode;
	}
	else
	{
		y->right=newnode;
	}
	return y;
}

void Preorder(node* root)
{
    if (root == NULL)
        return;
    else {
        cout << root->key << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Inorder(node* root)
{
    if (root == NULL)
        return;
    else {
        Inorder(root->left);
        cout << root->key << " ";
        Inorder(root->right);
    }
}


void Postorder(node* root)
{
    if (root == NULL)
        return;
    else {
        Postorder(root->left);
        Postorder(root->right);
        cout << root->key << " ";
    }
}

void solve()
{
    int n;
    cin>>n;
    node* root=NULL;
    int data;
    cin>>data;
    root=insert(root,data);
    for(int i=0;i<n-1;++i)
    {  
    	cin>>data;
    	insert(root,data);
    }
    Inorder(root);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    cout<<"\n";
	return 0;
}
