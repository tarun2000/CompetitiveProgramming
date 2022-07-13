//https://leetcode.com/problems/same-tree/

class Solution {
public:
    void intravel(TreeNode *root, vector<int> &ans)
    {
        if(root)
        {
            intravel(root->left, ans);
            ans.push_back(root->val);      //InOrder Trversal of the binry tree
            intravel(root->right, ans);
        }
        else
        {
            ans.push_back(100000);
        }
        
    }
    
    void pretravel(TreeNode *root, vector<int> &ans)
    {
        if(root)
        {
            ans.push_back(root->val);
            pretravel(root->left, ans);        //Pre Order Traversal of the binary tree
            pretravel(root->right, ans);
        }
        else
        {
            ans.push_back(100000);
        }
        
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> infirst;
        vector<int> insecond;
        vector<int> prefirst;
        vector<int> presecond;
        
        intravel(p, infirst);
        intravel(q, insecond);
        pretravel(p, prefirst);
        pretravel(q, presecond);
        if(infirst == insecond && prefirst == presecond)
        {
            return true;   
        }
        return false;
    }
};
