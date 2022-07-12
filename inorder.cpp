//inOrder Travesral of  BInary Tree
// (Left->root->RIght)

struct Node{
	int data; //value of node
	Node *left; //pointer pointing to left node
	Node *right; //pointer pointing to right node
};

inOrder(Node *root)
{
	if(!root) //if Root == NULL
	{
		return;
	}
	
	inOrder(root->left); //visit left sub-tree
	cout<<root->data; //visit the root	
	inOrder(root->right); //visit right sub-tree
}
