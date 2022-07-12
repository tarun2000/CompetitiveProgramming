//preOrder Travesral of  BInary Tree
// (Root->Left->RIght)

struct Node{
	int data; //value of node
	Node *left; //pointer pointing to left node
	Node *right; //pointer pointing to right node
};

preOrder(Node *root)
{
	if(!root) //if Root == NULL
	{
		return;
	}
	
	cout<<root->data; //visit the root
	preOrder(root->left); //visit left sub-tree
	preOrder(root->right); //visit right sub-tree
}
