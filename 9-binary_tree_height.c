#include "binary_trees.h"

/**
 * height_from_right - A function that measures the height of a binary tree
 * from right
 *
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: The height from right
 */
size_t height_from_right(const binary_tree_t *tree)
{
	binary_tree_t *curr_tree = tree->right;
	size_t height = 0;

	while (curr_tree != NULL)
	{
		height++;
		curr_tree = curr_tree->right;
	}
	return (height);
}

/**
 * height_from_left - A function that measures the height of a binary tree
 * from left
 *
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: The height from left
 */
size_t height_from_left(const binary_tree_t *tree)
{
	binary_tree_t *curr_tree = tree->left;
	size_t height = 0;

	while (curr_tree != NULL)
	{
		height++;
		curr_tree = curr_tree->left;
	}
	return (height);
}

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

	r_height = height_from_right(tree);
	l_height = height_from_left(tree);

	if (r_height >= l_height)
		return (r_height);
	else
		return (l_height);
}
