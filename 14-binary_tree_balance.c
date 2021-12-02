#include "binary_trees.h"
#include <stdio.h>

/**
 * height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
int height(const binary_tree_t *tree)
{
        size_t left, right;

	if (tree == NULL)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_balance - Calculate balance factor
 * @tree: Tree
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);
	lh = height(tree->left);
	rh = height(tree->right);

	return (lh - rh);
}
