#include "binary_trees.h"
/**
 * binary_tree_nodes - find count binary tree nodes
 *
 * @tree: binary tree
 *
 * Return: count of tree nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	binary_tree_nodes(tree->left);
	binary_tree_nodes(tree->right);
	return (1 + (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)));
}
