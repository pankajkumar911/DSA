/*
 * doublyLinkedList.h
 *
 *  Created on: Jan 29, 2017
 *      Author: Pankaj
 */
#ifndef __DOUBLYLINKEDLIST_H_
#define __DOUBLYLINKEDLIST_H_

#include <stdio.h>
#include <malloc.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}Node;

Node * newDNode(int data);

#endif

