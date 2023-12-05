#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/* local headers */
void binary_tree_traverse(const binary_tree_t *tree, size_t *size);

/**
 * binary_tree_size -  measures the size of a binary tree
 *
 * Description: If tree is NULL, do nothing
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: height of the tree, 0 if tree is NULL
 *
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	binary_tree_traverse(tree, &size);

	return (size);
}

/**
 * binary_tree_traverse - goes through a binary tree using in-order traversal
 *
 * Description: If tree or func is NULL, do nothing
 *
 * @tree: pointer to the root node of the tree to delete
 * @size: a pointer to a size variable to increse
*/
void binary_tree_traverse(const binary_tree_t *tree, size_t *size)
{
	if (tree == NULL)
		return;

	binary_tree_traverse(tree->left, size);

	if (tree != NULL)
		(*size)++;

	binary_tree_traverse(tree->right, size);
}
