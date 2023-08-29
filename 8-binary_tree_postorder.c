#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a binary tree in post-order style
 * @tree: reference to the root node of the tree
 * @func: pointer to a function for display
 * Return: assess the depth tier
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree  && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

