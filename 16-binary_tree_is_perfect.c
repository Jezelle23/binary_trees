#include "binary_trees.h"
/**
 * perfect_check - checks if the binary tree is perfect or not
 * by comparing left and right side
 * @tree: tree to check
 * Return: 0 (if not perfect)
 *
 */
int perfect_check(const binary_tree_t *tree)
{
	int leftside = 0, rightside = 0;

	if (tree->left && tree->right)
	{
		leftside = 1 + perfect_check(tree->left);
		rightside = 1 + perfect_check(tree->right);
		if (rightside == leftside && rightside != 0 && leftside != 0)
			return (rightside);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: tree to check
 * Return: 1 (tree is perfect)
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int answer = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		answer = perfect_check(tree);
		if (answer != 0)
		{
			return (1);
		}
		return (0);
	}
}
