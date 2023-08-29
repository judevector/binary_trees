#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses a binary tree in pre-order fashion
 * @tree: reference to the root node of the tree
 * @func: pointer to a function for printing
 * Return: assess the depth level
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

