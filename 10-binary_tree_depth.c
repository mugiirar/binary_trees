#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node
 * Return: number or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t num = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		num = num + 1;
		tree = tree->parent;
	}

	return (num);
}
