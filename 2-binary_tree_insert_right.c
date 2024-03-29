#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that insert anew node to the right.
 *
 * @parent: pointer to the parent of the new node being created.
 * @value: the value being storred in the new node.
 *
 * Return: on failure or if parent is NULL - NULL
 *	else a pointer to the new node.
 *
 * Description: If parent already has right-child, new node must replace it
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
