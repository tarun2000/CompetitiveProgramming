//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        q.push(root);
        if(root==NULL)
            return ans;
        int cnt=0;
        while(1)
        {
            
            vector<int> data;
            int size = q.size();
            if(size ==0)
            {
                return ans;
            }
            cnt++;
            while(size>0)
            {
                
                TreeNode *temp = q.front();
                q.pop();
                data.push_back(temp->val);
                
            
                    if(temp->left!=NULL)
                    {
                        q.push(temp->left);
                    }
                    if(temp->right!=NULL)
                    {
                        q.push(temp->right);
                    }
               
                size--;
                
            }
            if(cnt%2==0)
            {
                reverse(data.begin(), data.end());
            }
            ans.push_back(data);
            
        }
        
        return ans;
    }
};
