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

	lbalance = binary_tree_height(tree->left);
	rbalance = binary_tree_height(tree->right);

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

/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
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

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
	}

	return (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0);
}
