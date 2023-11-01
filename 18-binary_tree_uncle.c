#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: NULL, if node is NULL
 *	NULL if node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = node->parent->parent;

	if (node == NULL || node->parent == NULL || grandparent == NULL)
	{
		return (NULL);
	}

	if (grandparent->left == node->parent)
	{
		return (grandparent->right);
	}

	else
	{
		return (grandparent->left);
	}
}
