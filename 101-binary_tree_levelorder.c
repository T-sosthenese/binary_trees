#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a tree
 * @tree: poiter to the root ode whose height is computed
 *
 * Return: tree height, 0 if tree is NULL
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
 * print_level - helper fucntion for printing nodes in their level
 * @tree: pointer to the root node to be traversed
 * @level: current traversal level of the tree
 * @func: function pointer to the printing function
 */

void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);

	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - traverses through a binary tree (level order)
 * @tree: pointer to the root node of the tree to be traversed
 * @func: function pointer
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = binary_tree_height(tree);
	int i;

	if ((tree == NULL) || (func == NULL))
		return;

	for (i = 1; i <= height; i++)
		print_level(tree, i, func);
}
