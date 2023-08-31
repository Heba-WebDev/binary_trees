#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node to check
 * Return: If node is NULL or the parent is NULL, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

binary_tree_t *parent, *grandpa;

if (node != NULL && node->parent != NULL && node->parent->parent != NULL)
{
parent = node->parent;
grandpa = node->parent->parent;

if (grandpa->left != parent && grandpa->left != NULL)
return (grandpa->left);

if (grandpa->right != parent && grandpa->right != NULL)
return (grandpa->right);
}

return (NULL);
}
