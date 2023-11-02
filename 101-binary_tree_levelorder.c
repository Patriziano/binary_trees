#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: The height of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
		return (right_height + 1);
}

/**
 * binary_tree_level - Traverses a binary tree level by level.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 * @level: The current level to traverse.
 */
void binary_tree_level(const binary_tree_t *tree, void (*func)(int)
		, size_t level)
{
	if (tree == NULL)
		return;

	if (level == 1)
	{
		func(tree->n);
	}
	else if (level > 1)
	{
		binary_tree_level(tree->left, func, level - 1);
		binary_tree_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, level;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	for (level = 1; level <= height; level++)
	{
		binary_tree_level(tree, func, level);
	}
}
