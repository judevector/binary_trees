#include "binary_trees.h"
/**
* binary_tree_insert_left - adds a node as the left-child of another node
* @parent : reference to the parent node of the node to create
* @value : data to be stored in the new node
* Return: address of the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_dev;

	if (parent == NULL)
		return (NULL);

	node_dev = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = node_dev;
		node_dev->left = parent->left;
	}
	parent->left = node_dev;

	return (node_dev);
}

