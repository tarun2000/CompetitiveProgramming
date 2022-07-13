//https://leetcode.com/problems/balanced-binary-tree/
class Solution {
public:
    int maxd(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;    //To calculate the height of the tree from a given node
        }
        return(max(maxd(root->left), maxd(root->right))+1);
    }
    
    void inorder(TreeNode *root, bool &ans)
    {
        if(root!=NULL)
        {
            inorder(root->left, ans);
            int lh = maxd(root->left);
            int rh = maxd(root->right);   //To traverse the tree
            if(abs(lh-rh)>1)
            {
                ans = false;
            }
            inorder(root->right, ans);
        }
        
    }
    
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        inorder(root, ans);
        return ans;
    }
};
