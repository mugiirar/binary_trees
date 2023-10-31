#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left
 * child of another node
 * @parent: is a pointer to the node to insert the left
 * @value: is the value to store in the new node
 * Return: pointer or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	if (!parent)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = parent->left;
	parent->left = new;
	if (node->left)
		node->left->parent = node;

	return (node);
}


	
