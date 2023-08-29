#include "binary_trees.h"

/**
 * binary_tree_inorder - travers binary tree using in-order traversal
 * @tree: the tree to travers
 * @func: a pointer to a function to call for each node
 * Return: If tree or func is NULL, do nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

if (!tree || !func)
return;

func(tree->left->n);
binary_tree_preorder(tree, func);
binary_tree_preorder(tree->right, func);

}
