#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Pointer to the parent node of the left-child to be created
 * @value: The value to be inserted into the new node
 *
 * Return: Pointer to the created node OR NULL Upon failure
 *  OR if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	newNode->parent = parent;


	if (parent->right == NULL)
	{
		parent->right = newNode;
	}
	else
	{
		newNode->right = parent->right;
        newNode->right->parent = newNode;
		parent->right = newNode;
	}

	return (newNode);
}
