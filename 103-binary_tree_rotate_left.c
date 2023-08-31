#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a tree to the left
 * @tree: binary tree to rotate
 * Return: If no common ancestor was found, returns NULL
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

binary_tree_t *root;

if (tree == NULL || tree->right == NULL)
return (tree);

root = tree->right;
tree->right = root->left;

if (root->left != NULL)
root->left->parent = tree;

root->left = tree;
root->parent = tree->parent;
tree->parent = root;

return (root);
}
