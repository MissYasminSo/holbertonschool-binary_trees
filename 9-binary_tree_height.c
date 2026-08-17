#include "binary_trees.h"

/**
 * binary_tree_height - height of tree from node
 * @tree: tree to traverse
 *
 * Return: height of tree from node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight;
	size_t rheight;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (tree->left != NULL)
	{
		lheight = lheight + 1;
	}

	if (tree->right != NULL)
	{
		rheight = rheight + 1;
	}

	if (lheight > rheight)
	{
		return (lheight);
	}
	
	return (rheight);
}
