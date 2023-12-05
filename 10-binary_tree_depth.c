#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * Description: If tree is NULL, do nothing
 *
 * @tree: a pointer to the node to measure the depth
 *
 * Return: height of the tree, 0 if tree is NULL
 *
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth - 1);
}
