/*
 * doublyLinkedList.c
 *
 *  Created on: Jan 29, 2017
 *      Author: Pankaj
 */
#include <stdio.h>
#include <malloc.h>
#include "linkedList.h"

Node* newNode(int data)
{
	Node *tmp = (Node*) malloc(sizeof(Node));
	tmp->next=NULL;
	return tmp;
}
