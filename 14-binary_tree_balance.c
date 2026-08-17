#include "binary_trees.h"

/**
 * binary_tree_balance - gets balance factor of tree
 * @tree: tree to traverse
 *
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lbalance;
	size_t rbalance;

	if (tree == NULL)
	{
		return (0);
	}

	lbalance = binary_tree_balance(tree->left);
	rbalance = binary_tree_balance(tree->right);

	if (tree->left != NULL)
	{
		lbalance = lbalance + 1;
	}

	if (tree->right != NULL)
	{
		rbalance = rbalance + 1;
	}

	return (lbalance - rbalance);
}
