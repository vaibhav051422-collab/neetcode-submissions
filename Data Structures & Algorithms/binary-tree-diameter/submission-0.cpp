/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
int height(TreeNode*root,int&diam){
    if(!root)return 0;
    
    int lefth=height(root->left,diam);
    int righth=height(root->right,diam);
    diam=max(diam,(lefth+righth));
    return 1+max(lefth,righth);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int diam=0;
        height(root,diam);
        return diam;
        
    }
};
