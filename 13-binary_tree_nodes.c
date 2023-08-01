#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of trees with at least one child
 * @tree: pointer to the root of the tree whose children are counted
 *
 * Return: number of children, 0 otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left = 0;
	size_t nodes_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);

	return (nodes_left + nodes_right + 1);
}
