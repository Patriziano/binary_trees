#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 *                     at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: Number of nodes with at least i child
 *         0, if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		counter++;

	counter += binary_tree_nodes(tree->left);
	counter += binary_tree_nodes(tree->right);
	return (counter);
}
