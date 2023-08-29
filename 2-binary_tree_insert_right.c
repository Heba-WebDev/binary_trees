#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the root node
 * @value: the root node's value
 * Return: binary tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (!parent)
return (NULL);
node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

if (!node)
return (NULL);

node->n = value;
node->parent = parent;
node->left = NULL;
node->right = parent->right;
parent->right = node;

if (node->right)
{
node->right->parent = node;
}
return (node);
}
