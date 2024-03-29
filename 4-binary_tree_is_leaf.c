#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks if a node is a leaf.
 *
 * @node: the node in question.
 *
 * Return: if NULL - 0
 *	else if node is a leaf - 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
