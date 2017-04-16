#include<bits/stdc++.h>
using namespace std;
treeNode{

private:
	pair<string,string> data;
	treeNode* left,right, root = NULL;
	
public:
	treeNode(treeNode* left,treeNode* rigth, int d)
{
	this.left = left;
	this.right = right;
	data = d;
}
treeNode getright()
{
	return right;
}
{
	return left;
}
void setDatafirst(string d)
{
	data.first = d;
}
void setDatasecond(string d)
{
	data.second = d;
}
void setleft(treeNode* d)
{
  left = d;
}
void setright(treeNode* d)
{
  right = d;
}
treeNode* insert(treeNode* root,int data)
	{
		treeNode* x = new treeNode();
		if (root == NULL)
		{	
			root = firsttreeNode(data);

		}
		
		else if (data <= root->data)
		{
			root->left = insert(root->left, data);
		}
		else if (data > root->data)
		{
			 root->right == insert(root->right,data);
		}
		return root;
	}
};
