#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is leaf and 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (leafNode);
	}
	return (notLeafNode);
}
