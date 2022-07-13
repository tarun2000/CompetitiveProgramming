//https://practice.geeksforgeeks.org/problems/children-sum-parent/1/
class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    
    
    int isSumProperty(Node *root)
    {
     if((root == NULL)||(root->left==NULL && root->right==NULL))
     {
         return 1;
     }
     
     int lsum=0; //sum of left node of root
     int rsum=0; //sum of right node of root
     
     if(root->left)
     {
         lsum = root->left->data;
     }
     if(root->right)
     {
         rsum = root->right->data;
     }
     
     if((root->data == lsum+rsum)&&
         isSumProperty(root->left) &&
         isSumProperty(root->right))
         {
             return 1;
         }
         
         return 0;
     
    }
};
