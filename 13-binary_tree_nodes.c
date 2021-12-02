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
