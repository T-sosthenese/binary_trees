#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves on a binary tree
 * @tree: pointer to the root of a tree whose leaves are to be counted
 *
 * Return: Number of leaves, NULL otherwise
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves;
	size_t right_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (right_leaves + left_leaves);
}
