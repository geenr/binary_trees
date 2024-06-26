#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a node is the root.
 *
 * @node: the node in question.
 *
 * Return: if node is NULL - 0
 *	else if node is root - 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
