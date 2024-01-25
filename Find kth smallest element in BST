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
    int helper(TreeNode* root,int& i,int k){
        // base case
        if(root==NULL)return -1;


        //L
        int left=helper(root->left,i,k);
        if(left!=-1)return left;
        
        // N
        i++;
        if(i==k) return root->val;

        //R
        return helper(root->right,i,k);

    }
    int kthSmallest(TreeNode* root, int k) {
        int i=0;
        int ans=helper(root,i,k);
        return ans;
    }
};
