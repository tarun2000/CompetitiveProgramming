//https://leetcode.com/problems/invert-binary-tree/
class Solution {
public:
    
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode *temp = st.top();
            st.pop();
            
            if(temp!=NULL)
            {
                st.push(temp->left);
                st.push(temp->right);            
                swap(temp->left, temp->right);    //Take a node and swap the left and right sub-tree
            }
        }
        
        return root;
    }
};
