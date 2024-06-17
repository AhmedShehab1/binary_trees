#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree
 *
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: The height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height, l_height;

	if (tree == NULL)
		return (0);

	r_height = 1 + binary_tree_height(tree->right);
	l_height = 1 + binary_tree_height(tree->left);

	if (r_height >= l_height)
		return (r_height);
	else
		return (l_height);
}
