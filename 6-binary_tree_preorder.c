#include "binary_trees.h"
/**
 * binary_tree_preorder - Print tree in preorder
 * @tree: Tree
 * @func: Function to print
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
