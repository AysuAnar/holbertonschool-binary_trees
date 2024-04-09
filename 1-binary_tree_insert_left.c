#include "binary_trees.h"
/**
 * binary_tree_insert_left - Creates new node for binary tree.
 *
 * @parent: Parent of the new node. If null new node
 * is the parent.
 * @value: Value of new node.
 *
 * Return: Pointer to the new node. On failure NULL.
 * Failure can be memory allocation fail.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	else
	{
		new_node->left = NULL;
	}
	parent->left = new_node;
	return (new_node);
}
