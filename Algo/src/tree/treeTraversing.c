#include <malloc.h>
#include <stdio.h>

#include "../queue/queue.h"
#include "doublyLinkedList.h"

void inorder_traversing(Node *n);
void preorder_traversing(Node *n);
void postorder_traversing(Node *n);
void delete_tree(Node *n);
int sizeofTree(Node *n);
int depthOfTree(Node * root);

void inorder_traversing(Node *n)
{
	if(n==NULL)
		return;
	inorder_traversing(n->left);
	printf("%d ",n->data);
	inorder_traversing(n->right);
}

void preorder_traversing(Node *n)
{
	if(n==NULL)
		return;
	printf("%d ",n->data);
	inorder_traversing(n->left);
	inorder_traversing(n->right);
}

void postorder_traversing(Node *n)
{
	if(n==NULL)
		return;
	inorder_traversing(n->left);
	inorder_traversing(n->right);
	printf("%d ",n->data);

}

void delete_tree(Node *n)
{
	if(n==NULL)
		return;
	delete_tree(n->left);
	delete_tree(n->right);
	free(n);
}

int sizeofTree(Node *n)
{
	if(NULL == n)
	{
		return 0;
	}

	return sizeofTree(n->left) + 1 + sizeofTree(n->right);
}

int depthOfTree(Node * root)
{
	if(NULL == root)
		return 0;

	else
	{
		int lDepth = depthOfTree(root->left);
		int rDepth = depthOfTree(root->right);

		if ( lDepth > rDepth)
			return (1 + lDepth);
		else
			return (1 + rDepth);
	}
}

void levelOrderTraversing(Node *node)
{
	int front, rear;
	Node ** qnode = createQueue(&front,&rear);
	Node *tmp = node;

	while(tmp)
	{
		printf("%d ",tmp->data);
		if(NULL != tmp->left)
		{
			enQueue(qnode,&rear, tmp->left);
		}
		if(NULL != tmp->right)
		{
			enQueue(qnode,&rear, tmp->right);
		}

		tmp = dequeue(qnode, &front);
	}

}

int main()
{
	Node * root = newDNode(16);				//					    16
	root->left= newDNode(14);				//				14				10
	root->left->left= newDNode(8);			//			8	      7		9		3
	root->left->left->left= newDNode(2);	//		  2	  4     1
	root->left->left->right= newDNode(4);   //
	root->left->right= newDNode(7);
	root->left->right->left= newDNode(1);
	root->right = newDNode(10);
	root->right->left= newDNode(9);
	root->right->right=newDNode(3);

	printf("InOrder\n");
	inorder_traversing(root);
	printf("\nPreOrder\n");
	preorder_traversing(root);
	printf("\nPostOrder\n");
	postorder_traversing(root);

	printf("\nDepth of tree is : %d", depthOfTree(root));

	printf("\nSize of Tree is : %d", sizeofTree(root));

	printf("\nLevel Order traversal of binary tree is \n");
	levelOrderTraversing(root);



	printf("\nFreeing Memory\n");
	delete_tree(root);
	root=NULL;

}
