#include "binary_trees.h"

/**
 * max - to calculate the maximum value between two integers
 * @a: first integer
 * @b: second integer
 * Return: max value
 */

size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height- to measure the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

/*	return (left_height > right_height) ? left_height + 1 : right_height + 1;*/
	return (max(left_height, right_height) + 1);
}
