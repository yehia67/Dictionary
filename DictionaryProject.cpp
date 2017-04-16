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
treeNode getleft()
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
	void fillDic(){
		ifstream input("words.txt");
	}
};
int main(){
	int x;
	printf("please enter 1 if u want to translate from English to Arabic \n ");
	printf("please enter 2 if u want to translate from Arabic to English \n ");	
	scanf("%d",&x);
	while(x != 1 || x!= 2)
{
	printf("Error enter 1 or 2 Only!! \n ");
	scanf("%d",&x);
		}		
		printf("enter the word ");
		string s;
		cin>>s;
		treeNode y = new treeNode;
		y
		return 0;
}
