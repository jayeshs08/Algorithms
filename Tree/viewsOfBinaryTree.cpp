#include <iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class TreeNode
{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int v)
    {
        val=v;
        left=right=NULL;
    }
};
void leftview(TreeNode* root,int currentlevel)
{
    if(root==NULL)
    return;
    static int max=-1;
    if(max<currentlevel)
    {
        cout<<root->val<<" ";
        max=currentlevel;
    }
    leftview(root->left,currentlevel+1);
    leftview(root->right,currentlevel+1);
}
void rightview(TreeNode* root,int currentlevel)
{
    if(root==NULL)
    return;
    static int max=-1;
    if(max<currentlevel)
    {
        cout<<root->val<<" ";
        max=currentlevel;
    }
    rightview(root->right,currentlevel+1);
    rightview(root->left,currentlevel+1);
}
void topview(TreeNode* root,int currentlevel)
{
    

}
void bottomview(TreeNode* root,int currentlevel)
{

}
int main()
{
    TreeNode *root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(6);

    leftview(root,0);
    cout<<endl<<"-----------------"<<endl;
    rightview(root,0);
    cout<<endl<<"-----------------"<<endl;
    
    /*
                1
               /\
              2  3
             /\
            5  6  
    */

}