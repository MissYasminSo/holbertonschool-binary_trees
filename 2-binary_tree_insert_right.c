#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node on the right of the parent
 * @parent: parent node
 * @value: value of node
 *
 * Return: address to the created node, NULL otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tempnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	tempnode = malloc(sizeof(binary_tree_t));
	if (tempnode == NULL)
		return (NULL);
	tempnode->n = value;
	tempnode->parent = parent;
	tempnode->left = NULL;
	tempnode->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = tempnode;
	}
	else
	{
		tempnode->right = parent->right;
		tempnode->right->parent = tempnode;
		parent->right = tempnode;
	}
	return (tempnode);
}
