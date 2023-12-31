#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Poiter to the node whose height is to e measured
 *
 * Return: Tree height, 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
