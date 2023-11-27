#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * Description: If tree is NULL, do nothing
 *
 * @tree: pointer to the root node of the tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* stick to the left most leaf until finding NULL */
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}

	/* stick to the right most leaf until finding NULL */
	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	/* delete the node has no right nor left child */
	free(tree);
}
