#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node whose sibling is to be found
 *
 * Return: pointer to sibling node, NULL (no sibling/parent)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((node == NULL || node->parent == NULL))
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);
	else if (node == node->parent->left)
		return (node->parent->right);
	else
		return (NULL);
}
