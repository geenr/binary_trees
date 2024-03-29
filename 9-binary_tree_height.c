#include "binary_trees.h"

/**
 * binary_tree_height - A function is used to measure the height of a tree
 *
 * @tree: A pointer to the root of the tree in question.
 *
 * Return: if tree is NULL - 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_eft = 0;
		size_t r_ight = 0;

		l_eft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_ight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l_eft > r_ight) ? l_eft : r_ight);
	}
	return (0);
}
