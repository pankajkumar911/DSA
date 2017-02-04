/*
 * doublyLinkedList.c
 *
 *  Created on: Jan 29, 2017
 *      Author: Pankaj
 */

#include "doublyLinkedList.h"


Node * newDNode(int data)
{
	Node *tmp = (Node *) malloc(sizeof(Node));
	tmp->data=data;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}

