#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to a root node whose height is to be measured
 *
 * Return: height, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to a root node whose balance factor is to be measured)
 *
 * Return: balance factor, 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if ((tree == NULL) || ((tree->right == NULL) && (tree->left == NULL)))
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_is_perfect - Checks whether a binary tree is perfect
 * @tree: pointer to the root node whose perfection is assessed
 *
 * Return: 1 (perfect), 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect = 0;
	int right_perfect = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) != 0)
		return (0);

	if ((tree->left != NULL) && (tree->right != NULL))
	{
		left_perfect = binary_tree_is_perfect(tree->left);
		right_perfect = binary_tree_is_perfect(tree->right);

		return (left_perfect && right_perfect);
	}
	return (1);
}
