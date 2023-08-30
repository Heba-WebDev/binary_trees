#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the tree to measure its size
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

size_t size = 0;
binary_tree_t *leftNodes = tree->left;
binary_tree_t *rightNodes = tree->right;
if (!tree)
{
return 0;
}

while (leftNodes)
{
size++;
leftNodes= leftNodes->left;
}

while (rightNodes)
{
size++;
rightNodes = rightNodes->right;
}

return (size);
}
