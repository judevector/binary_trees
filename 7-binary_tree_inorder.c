#include "binary_trees.h"
/**
 * binary_tree_inorder - navigates a binary tree in in-order manner
 * @tree: reference to the root node of the tree
 * @func: pointer to a function for output
 * Return: evaluate the depth level
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree  && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

