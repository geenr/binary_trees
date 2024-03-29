#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a binary tree.
 *
 * @tree: The poniter to the root of the binary tree being measured.
 *
 * Return: if tree is NULL - 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
