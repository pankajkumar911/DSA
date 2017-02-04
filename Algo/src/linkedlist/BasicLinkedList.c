#include <stdio.h>
#include <malloc.h>
#include "linkedList.h"

void insertNodeAtEnd(Node *root, int data);
void insertNodeAtBeginning(Node *root, int data);
void insertNodeAt(Node *root, int data, int position);
void printLinkedList(Node *root);

void insertNodeAtEnd(Node *root, int data)
{
	if( NULL == root)
	{
		root=newNode(data);
	}
	else
	{
		Node *tmp = root;
		while(NULL != tmp->next)
		{
			tmp=tmp->next;
		}
		tmp->next=newNode(data);
	}
}

void insertNodeAtBeginning(Node *root, int data)
{
	Node * tmp = newNode(data);
	tmp->next=root;
	root=tmp;
}

 void insertNodeAt(Node *root, int data, int position)
 {

 }

 void printLinkedList(Node *root)
 {
	 Node *tmp =root;
	 while (NULL != tmp)
	 {
		 printf("%d ",tmp->data);
		 tmp=tmp->next;
	 }
 }

 int deleteNode(Node * node)
 {
	 int tmp = node->data;
	 free(node);
	 return tmp;	//scope issues may occur
 }









