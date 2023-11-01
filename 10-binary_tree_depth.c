#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the
 *                    depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of a tree/node if successful
 *         0, if tree/node is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth;

	node_depth = (tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0;
	return (node_depth);
}
