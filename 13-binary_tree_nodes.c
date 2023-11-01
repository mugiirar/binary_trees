#include "binary_trees.h"

/**
 * binary_tree_nodes - nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: number or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;
	size_t right_nodes;

	if (tree == NULL)
	{
		return (0);
	}
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + left_nodes + right_nodes);
	}

	return (left_nodes + right_nodes);
}
