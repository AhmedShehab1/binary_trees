#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth (the level)
 * of a node in a binary tree
 *
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: The depth (the level of the node)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *curr_node;
	size_t depth = 0;

	if (tree == NULL)
	return (0);

	curr_node = tree->parent;
	while (curr_node != NULL)
	{
		depth++;
		curr_node = curr_node->parent;
	}
	return (depth);
}
