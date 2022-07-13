//https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#
//https://leetcode.com/problems/binary-tree-right-side-view/
class Solution {
public:
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode *> q;
        q.push(root);
        if(root==NULL)
        {
            return ans;
        }
        
        while(1)
        {
            vector<int> data;
            int size = q.size();
            if(size==0){
                return ans;
            }
            
            while(size>0)
            {
                TreeNode *temp = q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                
                if(temp->right!=NULL)
                    q.push(temp->right);
                
                size--;
            }
            reverse(data.begin(), data.end());  //For Right View. Remove the line for Left View of the Binary Tree
            ans.push_back(data[0]);
            
        }
        return ans;
    }
};
