#include "binary_trees.h"
/**
 * binary_tree_height - find binary tree height
 *
 * @tree: binary tree
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	binary_tree_height(tree->left);
	binary_tree_height(tree->right);
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (binary_tree_height(tree->left) + 1);
	else
		return (binary_tree_height(tree->right) + 1);
}
