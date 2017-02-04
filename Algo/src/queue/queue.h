/*
 * queue.h
 *
 *  Created on: Jan 29, 2017
 *      Author: Pankaj
 */

#ifndef SRC_QUEUE_QUEUE_H_
#define SRC_QUEUE_QUEUE_H_
#include "../tree/doublyLinkedList.h"

#define MAX_Q_SIZE 5

// A VERY BAD IMPLEMENTATION WITH ISSUES IN QUEUE FOR TESTING PURPOSE ONLY

Node ** createQueue(int * front, int * rear);
void enQueue(Node ** qnode, int * rear, Node * node);
Node* dequeue(Node ** qnode, int * front);

#endif /* SRC_QUEUE_QUEUE_H_ */
