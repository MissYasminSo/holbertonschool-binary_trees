#include "binary_trees.h"

/**
 * binary_tree_delete - delete tree from parent
 * @parent: parent node
 * @value: value of node
 *
 * Return: address to the created node, NULL otherwise
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		tree->parent = NULL;
		tree->left = NULL;
		tree->right = NULL;
		free(tree);
	}
}
