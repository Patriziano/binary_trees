#include "binary_trees.h"
/**
 * binary_tree_is_leaf - A  function that checks if a node is a leaf
 * @node: The pointer to the node to check
 * Return: 1, if node is a leaf
 *         0, if otherwise or node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
