#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root of the tree whose size is to be measured
 * Return: tree height, 0 otherwise
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_size = 0;
	size_t left_size = 0;

	if (tree == NULL)
		return (0);

	right_size = binary_tree_size(tree->right);
	left_size = binary_tree_size(tree->left);

	return (right_size + left_size + 1);
}
