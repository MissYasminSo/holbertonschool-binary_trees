#include "binary_trees.h"

/**
 * binary_tree_node - inserts a node under the parent
 * @parent: parent node
 * @value: value of node
 *
 * Return: address to the created node, NULL otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
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
		parent = tempNode;
	}
	else
	{
		if (value < parent->n)
		{
			parent->left = tempNode;
		}
		else
		{
			parent->right = tempNode;
		}
	}
	return (tempNode);
}
