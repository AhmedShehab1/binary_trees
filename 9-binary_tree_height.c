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

	r_height = tree->right == NULL ? 0 : 1 + binary_tree_height(tree->right);
	l_height = tree->left == NULL ? 0 : 1 + binary_tree_height(tree->left);

	return (r_height > l_height ? r_height : l_height);
}
