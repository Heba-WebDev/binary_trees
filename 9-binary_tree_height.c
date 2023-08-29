#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree to measure its height
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree)
return (0);

size_t left = binary_tree_height(tree->left);
size_t right = binary_tree_height(tree->right);

return ((left > right ? left : right) + 1);

}
