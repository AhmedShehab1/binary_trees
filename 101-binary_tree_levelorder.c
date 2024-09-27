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
	QueueNode_t *temp = queue->front;
	binary_tree_t *node = temp->node;
    
	if (queue->front == NULL)
	return (NULL);

	queue->front = queue->front->next;

	if (queue->front == NULL)
	queue->rear = NULL;


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

/**
 * binary_tree_levelorder - visits a binary tree in a level order manner
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 *
*/
void binary_tree_levelorder(binary_tree_t *tree, void (*func)(int))
{
	Queue_t *queue = createQueue();
    
	if (!tree || !func)
		return;

	enqueue(queue, tree);

	while (!isEmpty(queue))
	{
		binary_tree_t *node = dequeue(queue);

		func(node->n);

		if (node->left)
		enqueue(queue, node->left);

		if (node->right)
		enqueue(queue, node->right);
	}
}
