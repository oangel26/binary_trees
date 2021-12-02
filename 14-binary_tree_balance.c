#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a
 * binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	
	if (tree == NULL)
		return (0);
	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);
	return (left_height - right_height);
}
