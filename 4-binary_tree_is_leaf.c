#include "binary_trees.h"
/**
 * binary_tree_is_leaf - evaluates if a given node is a leaf node
 * @node : reference to the pointer to node
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

