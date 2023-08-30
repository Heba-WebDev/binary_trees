#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree to measure its balance factor
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int leftNodes = 0;
int rightNodes = 0;

if (!tree)
return (0);

leftNodes = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
rightNodes = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

return (leftNodes - rightNodes);
}
