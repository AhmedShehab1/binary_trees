#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts leaves in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r_leaves, l_leaves;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	r_leaves = binary_tree_leaves(tree->right);
	l_leaves = binary_tree_leaves(tree->left);
	return (r_leaves + l_leaves);
}
