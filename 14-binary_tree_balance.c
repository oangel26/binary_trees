#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: height of node (size_t)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}

/**
 * binary_tree_balance - function that measures the balance factor of a
 * binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, left_hight = 0, right_hight = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_hight = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_hight = binary_tree_height(tree->right) + 1;
	balance = left_hight - right_hight;
	return (balance);
}
