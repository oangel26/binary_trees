#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the
 * number of leaves
 * Return: number of leaves in tree (size_t)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf = 0, right_leaf = 0;

	if (tree == NULL)
		return (0);
	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (left_leaf + right_leaf + 1);
	}
	return (left_leaf + right_leaf);
}
