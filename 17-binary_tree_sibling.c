#include "binary_trees.h"

/**
 * binary_tree_siblin -  finds the sibling of a node
 * @node: the node to check
 * Return: If node is NULL or the parent is NULL, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

if (node != NULL && node->parent != NULL)
{
if (node->parent->left != node && node->parent->left != NULL)
return (node->parent->left);

if (node->parent->right != node && node->parent->right != NULL)
return (node->parent->right);
}

return (NULL);
}
