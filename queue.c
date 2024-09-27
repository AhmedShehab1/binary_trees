#include "binary_trees.h"

/**
 * createQueue - creates a queue
 *
 * Return: queue
*/
Queue_t *createQueue()
{
	Queue_t *queue = malloc(sizeof(Queue_t));

	queue->front = queue->rear = NULL;
	return (queue);
}

/**
 * enqueue - Adds a new node at the end of a queue
 *
 * @queue: queue
 * @node: node to be added to the new queue node
 *
*/
void enqueue(Queue_t *queue, binary_tree_t *node)
{
	QueueNode_t *newNode = malloc(sizeof(newNode));

	newNode->next = NULL;
	newNode->node = node;

	if (queue->rear == NULL)
	{
	queue->front = queue->rear = newNode;
	return;
	}

	queue->rear->next = newNode;
	queue->rear = newNode;
}

/**
 * dequeue - pops the first queue node from the queue and returns it
 *
 * @queue: queue
 *
 * Return: first queue node or NULL if queue is empty
*/
binary_tree_t *dequeue(Queue_t *queue)
{
	if (queue->front == NULL)
	return (NULL);

	QueueNode_t *temp = queue->front;

	queue->front = queue->front->next;

	if (queue->front == NULL)
	queue->rear = NULL;

	binary_tree_t *node = temp->node;

	free(temp);
	return (node);
}

/**
 * isEmpty - checks wether the given queue is empty
 *
 * @queue: queue
 *
 * Return: 1 if queue is empty else 0
*/
int isEmpty(Queue_t *queue)
{
	return (queue->front == NULL);
}
