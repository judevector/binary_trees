#include "binary_trees.h"
/**
 * binary_tree_sibling - identifies the sibling of a given node
 * @node: reference to the node for sibling search
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node->parent->left == node)
			return (node->parent->right);

		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}

