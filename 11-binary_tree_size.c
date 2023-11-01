#include "binary_trees.h"

/**
 * binary_tree_size - finding size of tree
 * @tree: pointer to root
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (1 + left + right);
}
