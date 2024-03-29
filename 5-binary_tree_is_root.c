#include "binary_trees.h"

/**
 * binary_tree_is_root - A  function that checks if a given node is a root
 * @node: The  pointer to the node to check
 * Return: 1, if node is a root
 *         0, if otherwise or node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || (node->parent))
		return (0);
	return (1);
}
