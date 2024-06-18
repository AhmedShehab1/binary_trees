#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r_size, l_size, size;

	if (tree == NULL)
		return (0);

	r_size = tree->right == NULL ? 0 : 1 + binary_tree_size(tree->right);
	l_size = tree->left == NULL ? 0 : 1 + binary_tree_size(tree->left);

	if (tree->parent == NULL)
		size = r_size + l_size + rootNode;
	else
		size = r_size + l_size;

	return (size);
}
