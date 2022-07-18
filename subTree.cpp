//https://practice.geeksforgeeks.org/problems/check-if-subtree/1
class Solution
{
  public:
    
    bool ans = false;
    
    bool match(Node* T, Node* S)
    {
        if(T!=NULL && S!=NULL)
        {
            if(T->data == S->data && match(T->left, S->left) && match(T->right, S->right))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        if(T==NULL && S==NULL)
        {
            return true;
        }
        
        return false;
    }
    
    void inorder(Node* T, Node* S)
    {
        if(T)
        {
            inorder(T->left, S);
            bool res = match(T, S);
            if(res){ans = true;}
            inorder(T->right, S);
        }
    }
    
    bool isSubTree(Node* T, Node* S) 
    {
        inorder(T, S);
        return ans;
        
    }
};
