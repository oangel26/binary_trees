#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_tree_node;

	if (parent == NULL)
		return (NULL);

	left_tree_node = malloc(sizeof(binary_tree_t));
	if (left_tree_node == NULL)
		return (NULL);
	left_tree_node->n = value;
	if (parent->left == NULL)
	{
		left_tree_node->left = NULL;
		left_tree_node->right = NULL;
		parent->left = left_tree_node;
	}
	else
	{
		left_tree_node->left = parent->left;
		left_tree_node->right = NULL;
		parent->left = left_tree_node;
	}
	return (left_tree_node);
}
