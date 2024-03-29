#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes an entire tree structure
 *
 * @tree: the tree data structure being deleted.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
