#include "binary_trees.h"
/**
 * check_size - The function that sum each node of the tree
 * @tree: pointer to the root node of the tree to measure the size
 * @tree_size: size of the tree
 * Return: size of the tree
 */
size_t check_size(const binary_tree_t *tree, size_t tree_size)
{
	if (!tree)
		return (0);

	tree_size++;
	tree_size += check_size(tree->left, 0);
	tree_size += check_size(tree->right, 0);
	return (tree_size);
}

/**
 * binary_tree_size - A function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree
 *         0, if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	return (check_size(tree, tree_size));
}
