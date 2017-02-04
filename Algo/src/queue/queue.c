
#include "queue.h"


Node ** createQueue(int * front, int * rear)
{
	Node ** qnode = (Node **) malloc(sizeof(Node*)*MAX_Q_SIZE);
	*front = *rear =0;
	return qnode;
}

void enQueue(Node ** qnode, int * rear, Node * node)
{
	qnode[*rear] = node;
	(*rear)++;
}

Node* dequeue(Node ** qnode, int * front)
{
	(*front)++;
	return qnode[*front-1];
}
