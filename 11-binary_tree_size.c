#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: reference to the root node of the tree
 * Return: evaluate the tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	}
}

