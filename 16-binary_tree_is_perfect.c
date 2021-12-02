#include "binary_trees.h"

/**
 * _pow_recursion - Calculate power of a number
 * @x: Number
 * @y: Power
 *
 * Return: Power
 */
float _pow_recursion(float x, float y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (_pow_recursion(x, y + 1) / x);

	return (_pow_recursion(x, y - 1) * x);
}

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

/**
 * binary_tree_is_perfect - Is perfect
 * @tree: Root
 *
 * Return: 1 if tree is perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = height(tree);
	int leaves = binary_tree_leaves(tree);
	int power;

	if (tree == NULL)
		return (0);
	power = _pow_recursion(2, h - 1);

	if (leaves == power)
		return (1);
	return (0);
}
