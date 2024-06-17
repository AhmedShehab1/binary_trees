#include "binary_trees.h"
#include <stdio.h>

/**
 *
 *
 *
*/
int main(void)
{
	binary_tree_t *root = NULL;
	root = malloc(sizeof(binary_tree_t));
	root->parent = NULL;
	root->n = 50;

	binary_tree_insert_left(root, 20);
	binary_tree_insert_left(root, 30);
	printf("%d %d %d\n", root->n, root->left->n, root->left->left->n);
	binary_tree_insert_right(root, 60);
	binary_tree_insert_left(root->left, 20);
	binary_tree_insert_right(root->left, 60);
	binary_tree_insert_left(root->right, 20);
	binary_tree_insert_right(root->right, 60);
	binary_tree_insert_left(root->left->left, 20);
	binary_tree_insert_right(root->left->right, 60);
	binary_tree_insert_left(root->right->right, 20);
	binary_tree_insert_right(root->right->left, 60);

	binary_tree_delete(root);
	return (0);
}