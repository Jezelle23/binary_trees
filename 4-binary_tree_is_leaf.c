#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Checks if the node is a leaf
 * @node: Pointer to the node
 * Return: 1 (node is a leaf) or 0
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
