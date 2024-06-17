#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: Pointer to the parent node of the node to be created
 * @value: The value to be inserted into the new node
 *
 * Return: Pointer to the created node OR NULL Upon failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}
