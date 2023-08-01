#include "binary_trees.h"

/**
 * binary_tree_size - Displays the size of a binary tree
 * @tree: Pointer to the root node
 * Return: 0 (if tree is NULL)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeOf = 0;

	if (tree)
	{
		sizeOf += 1;
		sizeOf += binary_tree_size(tree->left);
		sizeOf += binary_tree_size(tree->right);

	}
	return (sizeOf);
}
