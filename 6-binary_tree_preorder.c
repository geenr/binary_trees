#include "binary_trees.h"

/**
 * binary_tree_preorder - A function that goes through a
 *		binary tree using pre-order traversal
 *
 * @tree: pointer to the root node of the tree being traversed.
 * @func: pointer to a function to call for each node
 * Description: The value in the node must be passed as a
 *	parameter to this function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
