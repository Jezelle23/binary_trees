#include "binary_trees.h"

/**
 * binary_tree_nodes - Displays the num of nodes in a tree with children
 * @tree: A pointer to the root node
 * Return: childnodes (number of nodes with children)
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t childnodes = 0;

	if (tree)
	{
		childnodes += (tree->left || tree->right) ? 1 : 0;
		childnodes += binary_tree_nodes(tree->left);
		childnodes += binary_tree_nodes(tree->right);
	}
	return (childnodes);
}
