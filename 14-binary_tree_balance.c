#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree to measure its balance factor
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int leftNodes;
int rightNodes;

if (!tree)
return (0);

leftNodes = tree->left ? (int)binary_tree_height(tree->left) : -1;
rightNodes = tree->right ? (int)binary_tree_height(tree->right) : -1;

return (leftNodes - rightNodes);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree to measure its height
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftNodes = 0;
size_t rightNodes = 0;

if (!tree)
return (0);

leftNodes = tree->left ? 1 + binary_tree_height(tree->left) : 0;
rightNodes = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return (leftNodes > rightNodes ? leftNodes : rightNodes);

}
