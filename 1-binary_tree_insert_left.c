#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a binary tree node
 * @parent: the root node
 * @value: the root node's value
 * Return: binary tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;
node = malloc(sizeof(binary_tree_t));
if (!node || !parent)
return (NULL);

node->parent = parent;
node->left = parent->left;
node->right = NULL;
node->n = value;
parent->left = node;

if (node->left)
{
node->left->parent = node;
}
return (node);
}
