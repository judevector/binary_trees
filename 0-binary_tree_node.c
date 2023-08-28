#include "binary_trees.h"
/**
* binary_tree_node - constructs a new node for a binary tree
* @parent : reference to the parent node of the node to create
* @value : data to be stored in the new node
* Return: address of the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_dev;

	node_dev = malloc(sizeof(binary_tree_t));

	if (node_dev == NULL)
	{
		return (NULL);
	}

	node_dev->parent = parent;
	node_dev->left = NULL;
	node_dev->right = NULL;
	node_dev->n = value;

	return (node_dev);
}

