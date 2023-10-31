#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left
 * @parent: pointer to the node to insert
 * @value: value to store in the new node
 * Return:  pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	if (!parent)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;
	parent->right = node;
	if (node->right)
		node->right->parent = node;

	return (node);
}
