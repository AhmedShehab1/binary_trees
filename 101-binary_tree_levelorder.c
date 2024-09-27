#include "binary_trees.h"

/**
 * binary_tree_levelorder - visits a binary tree in a level order manner
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 *
*/

void binary_tree_levelorder(binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	Queue_t *queue = createQueue();

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
