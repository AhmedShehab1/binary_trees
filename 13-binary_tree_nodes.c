#include "binary_trees.h"

/**
 * travel_until_leaves - A function that travels the binary tree except leaves
 *
 * @tree: A pointer to the root node of the tree
 *
 * Return: The size traveled until leaves
 */

int travel_until_leaves(const binary_tree_t *tree)
{
	int r_size, l_size;

	if (tree->right == NULL && tree->left == NULL)
		return (-1);

	r_size = tree->right == NULL ? 0 : 1 + travel_until_leaves(tree->right);
	l_size = tree->left == NULL ? 0 : 1 + travel_until_leaves(tree->left);

	return (r_size + l_size);
}

/**
 * binary_tree_nodes - A function that counts the nodes with at least 1 child
 * in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r_nodes, l_nodes;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	r_nodes = tree->right == NULL ? 0 : 1 + travel(tree->right);
	l_nodes = tree->left == NULL ? 0 : 1 + travel(tree->left);

	return (r_nodes + l_nodes + rootNode);
}
