#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: reference to the root node of the tree
 * Return: evaluate the tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (maxDepth(tree) - 1);
}

/**
 * maxDepth - assesses the height of a binary tree
 * @node: reference to the node being examined
 * Return: evaluate the tree height
 */
int maxDepth(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
	/* compute the depth of each subtree */
		int lDepth_dev = maxDepth(node->left);
		int rDepth_dev = maxDepth(node->right);

		/* use the larger one */
		if (lDepth_dev > rDepth_dev)
		{
			return (lDepth + 1);
		}
		else
		{
			return (rDepth_dev + 1);
		}
	}
}

