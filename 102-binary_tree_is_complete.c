#include "binary_trees.h"

/**
 * count_nodes - count the nodes in a binary tree
 * @tree: pointer to the root node
 * Return: the number of nodes
 */

unsigned int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * is_complete - to check if a binary tree is complete
 * @tree: pointer to the root nodes to check in
 * @i: - index assigned to the node
 * @num_nodes: the number of nodes
 * Return: 0 if tree is NULL
 */

int is_complete(const binary_tree_t *tree, unsigned int i, unsigned int
		num_nodes)
{
	if (tree == NULL)
		return (1);

	if (i >= num_nodes)
		return (0);

	return (is_complete(tree->left, (2 * i) + 1, num_nodes) &&
			is_complete(tree->right, (2 * i) + 2, num_nodes));
}

/**
 * binary_tree_is_complete - to call the is_complete function
 * @tree: pointer to the root
 * Return: the perfect binary tree
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t num_nodes;

	if (tree == NULL)
		return (0);
	num_nodes = count_nodes(tree);

	return (is_complete(tree, 0, num_nodes));

}
