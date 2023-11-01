#include "binary_trees.h"
/**
 * binary_height - A function that calculates the height of a node
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the height with higher value
 */

int binary_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);

	height_left = (tree->left) ? 1 + binary_height(tree->left) : 0;
	height_right = (tree->right) ? 1 + binary_height(tree->right) : 0;

	return ((height_left > height_right) ? height_left : height_right);
}


/**
 * binary_tree_balance - A function that measures the
 *                       balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: The balance factor or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);

	height_left = (tree->left) ? 1 + binary_height(tree->left) : 0;
	height_right = (tree->right) ? 1 + binary_height(tree->right) : 0;

	return (height_left - height_right);
}
