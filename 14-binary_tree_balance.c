#include "binary_trees.h"

/**
 * binary_tree_height - Display height of a binary tree
 * @tree: Pointer to the root node
 * Return: 0 (if tree is NULL)
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftree = 0, rightree = 0;

	if (tree)
	{
		leftree = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;

		rightree = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;
		return (leftree > rightree ? leftree : rightree);
	}
	return (0);
}

/**
 * binary_tree_balance - Display the balance factor of a binary tree
 * @tree: Pointer to the root node
 * Return: 0 (if tree is NULL)
 *
 */
int binary_tree_balance(const binary_tree_t* tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
