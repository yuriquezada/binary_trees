#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * *binary_tree_insert_right - Insert new node to right
 * @parent: parent of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);
	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
		return (NULL);
	right_node->right = parent->right;
	if (right_node->right != NULL)
		right_node->right->parent = right_node;
	parent->right = right_node;

	return (right_node);
}
