#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Evaluate if some node is a leaf
 * @node: node of a tree
 *
 * Return: 1 if node is leaf or 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
