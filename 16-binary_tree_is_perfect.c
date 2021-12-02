#include "binary_trees.h"

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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hight = 0, leaves = 0, i, count = 1;

	if (tree == NULL)
		return (0);
	hight = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);
	for (i = 0; i < hight; i++)
		count = count * 2;
	if (count == leaves)
		return (1);
	return (0);
}

