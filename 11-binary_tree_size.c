#include "binary_trees.h"

/**
*binary_tree_size - a function that measures the size of a binary tree
*@tree:  is a pointer to the root node of the tree to measure the height.
*Return: Size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t L, R;
	if (tree == NULL)
	return (0);

	L = binary_tree_size(tree->left);
	R = binary_tree_size(tree->right);
	return (L + R + 1);
}
