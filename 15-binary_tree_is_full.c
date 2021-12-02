#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child in tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_left = 0, node_right = 0;

	if (tree == NULL)
		return (0);

	node_left = binary_tree_nodes(tree->left);
	node_right = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (node_left + node_right + 1);
	return (node_left + node_right);
}

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the number of leaves
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

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if node is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int nodes = 0, leaves = 0;

	if (tree == NULL)
		return (0);
	nodes = binary_tree_nodes(tree);
	leaves = binary_tree_leaves(tree);
	if (nodes == leaves - 1)
		return (1);
	return (0);
}
