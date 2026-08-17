#include "binary_trees.h"

/**
 * binary_tree_size - size of tree
 * @tree: tree to traverse
 *
 * Return: depth of tree from node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize;
	size_t rsize;

	if (tree == NULL)
	{
		return (0);
	}

	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);

	return (lsize + rsize + 1);
}
