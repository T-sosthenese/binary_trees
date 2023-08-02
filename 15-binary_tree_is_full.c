#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks whether a binary tree is full
 * @tree: Pointer to root node whose full status is to be checked
 *
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_nodes = 0;
	int right_nodes = 0;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_is_full(tree->left);
	right_nodes = binary_tree_is_full(tree->right);

	return (left_nodes == right_nodes);
}
