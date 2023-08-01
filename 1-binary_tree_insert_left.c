#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert left child in
 * @value: The value to store in the new node
 *
 * Return: pointer to the created node, Null(failure or NULL parent)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	
	parent->left = node;

	return (node);
}
