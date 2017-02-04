/*
 * doublyLinkedList.h
 *
 *  Created on: Jan 29, 2017
 *      Author: Pankaj
 */

#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_

typedef struct node
{
	int data;
	struct node *next;
}Node;

Node* newNode(int );

#endif /* SRC_LINKEDLIST_LINKEDLIST_H_ */
