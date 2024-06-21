#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * full binary tree is a binary tree where each node within the tree
 * have exactly 2 children except for the leaf nodes
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree full OR 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{

	int left, right;

	if (tree)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

		if (!(left || right) || (left && right))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	return (0);
}
