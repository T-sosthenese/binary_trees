#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds an uncle of a given node
 * @node: Pointer to a root node whose uncle is to be searched
 *
 * Return: pointer to uncle node, Null (node is null, node has no uncle)
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	else if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (NULL);
}
