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
bool helper(TreeNode* root,int lmaxi,int rmaxi){
    if(root==NULL)return true;
    int x=root->val;
    if(!(lmaxi<x&&rmaxi>x)){
        return false;
    }


    return helper(root->left,lmaxi,x)&&helper(root->right,x,rmaxi);
}
    bool isValidBST(TreeNode* root) {
        return helper(root,INT_MIN,INT_MAX);
        
    }
};
