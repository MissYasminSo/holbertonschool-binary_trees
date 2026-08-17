#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes in tree
 * @tree: tree to traverse
 *
 * Return: count of nodes of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lnode;
	size_t rnode;

	if (tree == NULL)
	{
		return (0);
	}

	lnode = binary_tree_nodes(tree->left);
	rnode = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (lnode + rnode + 1);
	}
	return (lnode + rnode);
}
