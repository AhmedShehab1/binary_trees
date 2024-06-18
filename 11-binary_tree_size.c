#include "binary_trees.h"

/**
 * travel - A function that go through the binary tree
 *
 * @tree: A pointer to the root node of the tree
 *
 * Return: The size traveled
 */

size_t travel(const binary_tree_t *tree)
{
	size_t r_size, l_size;

	r_size = tree->right == NULL ? 0 : 1 + travel(tree->right);
	l_size = tree->left == NULL ? 0 : 1 + travel(tree->left);

	return (r_size + l_size);
}

/**
 * binary_tree_size - A function that measures the size of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r_size, l_size;

	if (tree == NULL)
		return (0);

	r_size = tree->right == NULL ? 0 : 1 + travel(tree->right);
	l_size = tree->left == NULL ? 0 : 1 + travel(tree->left);

	return (r_size + l_size + rootNode);
}
