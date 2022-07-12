//postOrder Travesral of  Binary Tree
// (Left->Right->root)

struct Node{
	int data; //value of node
	Node *left; //pointer pointing to left node
	Node *right; //pointer pointing to right node
};

postOrder(Node *root)
{
	if(!root) //if Root == NULL
	{
		return;
	}
	
	postOrder(root->left); //visit left sub-tree
	postOrder(root->right); //visit right sub-tree
	cout<<root->data; //visit the root	
	
}
