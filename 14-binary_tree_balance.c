#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
int height(const binary_tree_t *tree)
{
	if (tree)
	{
		int l = 0, r = 0;

		l = tree->left ? 1 + height(tree->left) : 0;
		r = tree->right ? 1 + height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	int lh, rh;

	if (tree->left == NULL)
		lh = 0;
	else
		lh = 1 + height(tree->left);
	if (tree->right == NULL)
		rh = 0;
	else
		rh = 1 + height(tree->right);

	balance = lh - rh;

	return (balance);
}
