#include "binary_trees.h"

/**
 * binary_tree_is_root - Evaluate if some node is root ot not
 * @node: Node of tree
 *
 * Return: 1 if some node is root or 0 for otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
