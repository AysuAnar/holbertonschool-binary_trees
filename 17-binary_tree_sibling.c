#include "binary_trees.h"
/**
 * binary_tree_sibling - check binary tree have sibling or not
 *
 * @node: binary tree
 *
 * Return: if true return other size, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
