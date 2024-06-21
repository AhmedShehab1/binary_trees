#include "binary_trees.h"
#include <stdio.h>


/**
 * getDepth - gets the depth of a given tree
 * @root: Pointer to root of the tree
 *
 * Return: Depth of the tree
*/
int getDepth(const binary_tree_t *root)
{
	int d = 0;

	while (root)
	{
		d++;
		root = root->left;
	}
	return (d);
}
/**
 * isPerfect - Recursively checks for perfectness of the tree
 * @root: Pointer to root of the tree
 * @d: depth of the tree
 * @level: current level of the tree
 *
 * Return: 1 if Perfect 0 Otherwise
*/
int isPerfect(const binary_tree_t *root, int d, int level)
{
	if (root == NULL)
		return (0);

	if (root->left == NULL && root->right == NULL)
	{
		if ((level + 1) == d)
			return (1);
		return (0);
	}
	if (root->left == NULL || root->right == NULL)
	{
		return (0);
	}

	if (isPerfect(root->left, d, level + 1) &&
		isPerfect(root->right, d, level + 1))
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - Checks for binary tree perfectness
 * @tree: Pointer to root of the tree
 *
 * Return: 1 if Perfect, 0 Otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (isPerfect(tree, getDepth(tree), 0));
}

