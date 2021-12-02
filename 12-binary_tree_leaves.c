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

/**
 * binary_tree_leaves - count leaves of a node
 * @tree: node
 *
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	static size_t count;
	size_t last = count;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree) == 1)
		count++;
	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);

	return (count - last);

}
