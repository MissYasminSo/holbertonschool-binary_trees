#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node on the left of the parent
 * @parent: parent node
 * @value: value of node
 *
 * Return: address to the created node, NULL otherwise
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	tempNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);
	tempNode->n = value;
	tempNode->parent = parent;
	tempNode->left = NULL;
	tempNode->right = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		if (parent->left == NULL)
		{
			parent->left = tempNode;
		}
		else
		{
			tempNode->left = parent->left;
			tempNode->left->parent = tempNode;
			parent->left = tempNode;
		}
	}
	return (tempNode);
}
