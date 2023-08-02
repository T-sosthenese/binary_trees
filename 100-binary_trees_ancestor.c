#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor between two nodes
 * @first: Pointer to first node whose ancestor is being searched
 * @second: Pointer to the second node whose common ancestor is searched
 *
 * Return: Pointer to common ancestor, NULL if not found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first->parent == second)
		return ((binary_tree_t *)second);

	if (second->parent == first)
		return ((binary_tree_t *)first);

	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);

	if (first->parent == second->parent->parent)
		return ((binary_tree_t *)first->parent);

	if (second->parent == first->parent->parent)
		return ((binary_tree_t *)second->parent);

	if (first->parent->parent == second->parent->parent)
		return ((binary_tree_t *)first->parent->parent);
	else
		return (NULL);
}
