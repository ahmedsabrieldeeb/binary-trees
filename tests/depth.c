#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t depth;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);

	root->left->left = binary_tree_node(root->left, 6);
	root->left->right = binary_tree_node(root->left, 56);
	root->right->left = binary_tree_node(root->right, 256);
	root->right->right = binary_tree_node(root->right, 512);

	root->left->left->left = binary_tree_node(root->left->left, 3);
	root->left->left->right = binary_tree_node(root->left->left, 9);
	root->left->right->left = binary_tree_node(root->left->right, 34);
	root->left->right->right = binary_tree_node(root->left->right, 72);

	root->right->left->left = binary_tree_node(root->right->left, 200);
	root->right->left->right = binary_tree_node(root->right->left, 350);
	root->right->right->left = binary_tree_node(root->right->right, 450);
	root->right->right->right = binary_tree_node(root->right->right, 600);

	root->left->right->left->left = binary_tree_node(root->left->right->left, 20);
	root->left->right->left->right = binary_tree_node(root->left->right->left, 45);

	root->right->left->right->left = binary_tree_node(root->right->left->right, 300);
	root->right->left->right->right = binary_tree_node(root->right->left->right, 390);

	root->right->right->left->left = binary_tree_node(root->right->right->left, 420);
	root->right->right->left->right = binary_tree_node(root->right->right->left, 500);

	root->right->right->right->left = binary_tree_node(root->right->right->right, 550);
	root->right->right->right->right = binary_tree_node(root->right->right->right, 700);
    binary_tree_print(root);

    depth = binary_tree_depth(root);
    printf("Depth of %d: %lu\n", root->n, depth);
    depth = binary_tree_depth(root->right);
    printf("Depth of %d: %lu\n", root->right->n, depth);
    depth = binary_tree_depth(root->left->right);
    printf("Depth of %d: %lu\n", root->left->right->n, depth);
    return (0);
}