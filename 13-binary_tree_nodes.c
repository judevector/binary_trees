#include "binary_trees.h"
/**
 * binary_tree_nodes - tallies nodes with at least one child
 * @tree: reference to the root node of the tree
 * Return: quantity of nodes with a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	}
	else
	{
		return (0);
	}
}

