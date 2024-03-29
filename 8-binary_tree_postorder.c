#include "binary_trees.h"

/**
 * binary_tree_postorder - A function that goes through a binary
 *		tree using post-order traversal
 *
 * @tree: A pointer to the root of the tree being traversed.
 * @func: A pointer to the function that calls each node.
 *
 * Description: The value in the node must be passed as
 *		a parameter to this function.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
