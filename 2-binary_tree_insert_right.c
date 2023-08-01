#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right child of another node
 *	if the parent has a right child, the new node takes its place and old
 *	child set to right child of the new node
 * @parent: pointer to the parent node where new node will be inserted
 * @value: The data to be stored in the child node
 *
 * Return: Pointer to the new node, NULL (failure or NULL parent
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = value;
	node->left = NULL;
	node->parent = parent;

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}
	else
	{
		parent->right = node;
		node->left = NULL;
	}
	return (node);
	free(node);
}
