#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t recursive_binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * Description: If tree is NULL, do nothing
 *
 * @tree: pointer to the root node of the tree to measure the height (excluded)
 *
 * Return: height of the tree, 0 if tree is NULL
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* we need to start counting from the node we at (not included)*/
	return (recursive_binary_tree_height(tree) - 1);
}

/**
 * recursive_binary_tree_height - do the recursive call to calculate height
 *
 * Description: If tree is NULL, do nothing
 *
 * @tree: pointer to the root node of the tree to measure the height (included)
 *
 * Return: height of the tree, 0 if tree is NULL
 *
*/
size_t recursive_binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = recursive_binary_tree_height(tree->left);
	right_height = recursive_binary_tree_height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
