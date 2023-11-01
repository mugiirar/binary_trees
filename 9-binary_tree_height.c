#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: number or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	else
	{
		left = 0;
	}

	if (tree->right != NULL)
	{
		right = 1 + binary_tree_height(tree->right);
	}
	else
	{
		right = 0;
	}
	return (left > right ? left : right);
}
