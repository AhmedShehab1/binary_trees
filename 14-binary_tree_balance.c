#include "binary_trees.h"

/**
 * binary_tree_level - A function that measures the level of a binary tree
 *
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: The level
 */

size_t binary_tree_level(const binary_tree_t *tree)
{
	size_t r_level, l_level;

	if (tree == NULL)
		return (-1);

	r_level = tree->right == NULL ? 0 : 1 + binary_tree_level(tree->right);
	l_level = tree->left == NULL ? 0 : 1 + binary_tree_level(tree->left);

	return (r_level > l_level ? r_level : l_level);
}

/**
 * binary_tree_balance - A function that measures the balance factor
 * of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance
 */

size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t r_height, l_height;

	if (tree == NULL)
		return (0);

	r_height = 1 + binary_tree_level(tree->right);
	l_height = 1 + binary_tree_level(tree->left);

	return (l_height - r_height);
}
