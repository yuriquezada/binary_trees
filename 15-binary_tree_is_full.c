#include "binary_trees.h"
/**
 *binary_tree_is_full - Check if a binary tree is full
 *
 *@tree: pointer to tree
 *
 *Return: 1 if a binary tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int isfull_left = 0, isfull_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		isfull_left = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		isfull_right = binary_tree_is_full(tree->right);
	return (isfull_left && isfull_right);
}
