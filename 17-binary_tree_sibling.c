#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node to find its sibling
 *
 * Return: pointer to sibling node, else NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
	}
	else
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
	}

	return (NULL);
}
