#include "binary_trees.h"

/**
 * binary_tree_depth - determine depth of node
 * @tree: tree to traverse
 *
 * Return: depth of tree from node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
	{
		return (0);
	}

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
