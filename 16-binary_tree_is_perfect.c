#include "binary_trees.h"
/**
 * binary_height - A fucntion that finds the height of each sub/tree
 * @tree: pointer to the root node of the tree to check
 * Return: The height of either left or right child
 */

int binary_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);

	height_left = (tree->left) ? 1 + binary_tree_is_perfect(tree->left) :
		0;
	height_right = (tree->right) ? 1 + binary_tree_is_perfect(tree->right)
		: 0;
	return ((height_left > height_right) ? height_left : height_right);
}


/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1, if a perfect tree
 *         0, if otherwise or NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_height(tree->left) != binary_height(tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));

	return (0);
}
