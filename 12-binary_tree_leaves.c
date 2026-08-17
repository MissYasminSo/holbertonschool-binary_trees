#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in tree
 * @tree: tree to traverse
 *
 * Return: count of leaves of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lleaves;
	size_t rleaves;

	if (tree == NULL)
	{
		return (0);
	}

	lleaves = binary_tree_leaves(tree->left);
	rleaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (lleaves + rleaves + 1);
	}
	return (lleaves + rleaves);
}
