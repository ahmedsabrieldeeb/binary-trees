#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"


void binary_tree_height_aux(const binary_tree_t* tree, size_t **left_height_ptr, size_t **right_height_ptr);

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * Description: If tree or func is NULL, do nothing
 *
 * @tree: pointer to the root node of the tree to delete
 * 
 * Return: height of the tree, 0 if tree is NULL
 *
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	size_t *left_height_ptr = &left_height, *right_height_ptr = &right_height;

	binary_tree_height_aux(tree, &left_height_ptr, &right_height_ptr);
	
	if (left_height >= right_height)
		return (left_height);
	else
		return (right_height);

	// size_t left_height, right_height;

	// if (tree == NULL)
	// 	return (0);

	// left_height = binary_tree_height(tree->left);
	// right_height = binary_tree_height(tree->right);

	// if (left_height > right_height)
	// 	return (1 + left_height);
	// else
	// 	return (1 + right_height);
}

void binary_tree_height_aux(const binary_tree_t* tree, size_t **left_height_ptr, size_t **right_height_ptr)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
	{
		**left_height_ptr = **left_height_ptr + 1;
		binary_tree_height_aux(tree->left, left_height_ptr, right_height_ptr);
	}
	if (tree->right != NULL)
	{
		**right_height_ptr = **right_height_ptr + 1;
		binary_tree_height_aux(tree->right, left_height_ptr, right_height_ptr);
	}
}
