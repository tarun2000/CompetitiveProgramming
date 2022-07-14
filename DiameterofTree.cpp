//https://leetcode.com/problems/diameter-of-binary-tree/
class Solution {
public:
    
    int res = 0;
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;  
        
        int lh = height(root->left);
        int rh = height(root->right);
        res = max(res, (1+lh+rh));
        
        return(max(lh,rh)+1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        
        int data = height(root);
        return res-1;
    }
};
