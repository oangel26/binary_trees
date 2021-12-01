#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_tree;

	node_tree = malloc(sizeof(binary_tree_t));
	if (node_tree == NULL)
	{
		return NULL;
	}
	else
	{
		node_tree->n = value;
		node_tree->parent = parent;
		node_tree->left = NULL;
		node_tree->right = NULL;
	}
	return(node_tree);
}
