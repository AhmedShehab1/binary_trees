#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdio.h>
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

void binary_tree_delete(binary_tree_t *tree);

/******************/
int binary_tree_is_root(const binary_tree_t *node);
#define rootNode 1
#define notRootNode 0
/*****************/
int binary_tree_is_leaf(const binary_tree_t *node);
#define leafNode 1
#define notLeafNode 0
/****************/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);

/**
 * QueueNode_s - queue node
 *
 * @next: pointer to the next queue node
 * @node: binary tree node
 *
*/
struct QueueNode_s
{
	struct QueueNode_s *next;
	binary_tree_t *node;
};

typedef struct QueueNode_s QueueNode_t;

/**
 * Queue_s - queue
 *
 * @front: pointer to the front queue node
 * @rear: pointer to the end queue node
 *
*/
struct Queue_s
{
	QueueNode_t *front;
	QueueNode_t *rear;
};

typedef struct Queue_s Queue_t;

Queue_t *createQueue();
void enqueue(Queue_t *queue, binary_tree_t *node);
binary_tree_t *dequeue(Queue_t *queue);
int isEmpty(Queue_t *queue);

void binary_tree_levelorder(binary_tree_t *tree, void (*func)(int));
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
int isPerfect(const binary_tree_t *root, int d, int level);
int getDepth(const binary_tree_t *root);
#endif
