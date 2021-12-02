#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: is a pointer to the node to find the uncle
 * Return:  pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != node->parent &&
		node->parent->parent->left != NULL)
		uncle = node->parent->parent->left;
	else if (node->parent->parent->right != node->parent &&
			 node->parent->parent->right != NULL)
		uncle = node->parent->parent->right;
	else
		uncle = NULL;
	return (uncle);
}

