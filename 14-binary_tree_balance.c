#include "binary_trees.h"

/**
 * binary_tree_balance - factor
 * @tree: pointer to node
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (!tree)
		return (0);
	if (tree->left != NULL)
	{
		left = (int)tree_height(tree->left);
	}
	else
	{
		left = -1;
	}
	if (tree->right != NULL)
	{
		right = (int)tree_height(tree->right);
	}
	else
	{
		right = -1;
	}

	return (left - right);
}

/**
 * tree_height - measures balance factor
 * @tree: tree to measure the height
 * Return: height of the tree 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
	{
		left = 1 + tree_height(tree->left);
	}
	else
	{
		left = 0;
	}

	if (tree->right != NULL)
	{
		right = 1 + tree_height(tree->right);
	}
	else
	{
		right = 0;
	}

	return (left > right ? left : right);
}
