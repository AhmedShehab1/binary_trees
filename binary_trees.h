#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n : Integer stored in the node
 * @parent: Pointer to parent node
 * @left: Pointer to left child node
 * @right: Pointer to right child node
 *
*/
struct binary_tree_s
{

	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/******************/
void binary_tree_delete(binary_tree_t *tree);
#define leafNode 1
#define notLeafNode 0
/******************/

/******************/
int binary_tree_is_root(const binary_tree_t *node);
#define rootNode 1
#define notRootNode 0
/*****************/

#endif
