#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the tree is full
 * @tree: tree to check
 *
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	result = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);

	return (result);
}
