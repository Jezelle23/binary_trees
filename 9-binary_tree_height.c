#include "binary_trees.h"

/**
* binary_tree_height - displays the height of the tree
* @tree: Pointer to the root node
* Return: 0
*
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftree = 0, rightree = 0;

		leftree = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rightree = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((leftree > rightree) ? leftree : rightree);
	}
	return (0);
}
