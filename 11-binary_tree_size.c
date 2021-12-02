#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: If tree is NULL, your function must return 0, else return size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0, size = 1;

		l = tree->left ? binary_tree_size(tree->left) : 0;
		r = tree->right ? binary_tree_size(tree->right) : 0;
		size += l + r;
		return (size);
	}
	return (0);
}
