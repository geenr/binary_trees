#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node to the left.
 *
 * @parent: the pointer to the node to insert the left-child in.
 * @value: the value stored by the new node.
 *
 * Return: on failure or if parent is NULL - NULL
 *	else a pointer to the created node
 *
 * Description: If parent already has left-child, the newnode must replace it
 *	and the old left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
