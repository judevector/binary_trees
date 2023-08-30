#include "binary_trees.h"
/**
 * binary_tree_balance - evaluates the balance factor of a tree
 * @tree: reference to the root node of the tree
 * Return: balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightL_dev = 0;
	int heightR_dev = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		heightL_dev = binary_tree_height(tree->left) + 1;

	if (tree->right)
		heightR_dev = binary_tree_height(tree->right) + 1;

	return (heightL_dev - heightR_dev);
}

/**
* binary_tree_height - This measures the height of a binary tree
* @tree: pointer to node root
* Return:  measure the height.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (maxDepth(tree) - 1);
}

/**
* maxDepth - This measures the height of a binary tree
* @node: pointer to node
* Return: measure the height.
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
			return (lDepth_dev + 1);
		}
		else
		{
			return (rDepth_dev + 1);
		}
	}
}

