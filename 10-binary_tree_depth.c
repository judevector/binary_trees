#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the depth of a specific node
 * @tree: reference to the node for depth assessment
 * Return: evaluate the node depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int depth_new;
	binary_tree_t *current_dev;

	if (tree == NULL)
		return (0);

	depth_new = 0;

	current_dev = tree->parent;
	while (current_dev)
	{
		depth_new++;
		current_dev = current_dev->parent;
	}
	return (depth_new);
}

