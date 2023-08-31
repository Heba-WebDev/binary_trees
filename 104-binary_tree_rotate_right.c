#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a tree to the right
 * @tree: binary tree to rotate
 * Return: If no common ancestor was found, returns NULL
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{

binary_tree_t *root;

if (tree == NULL || tree->left == NULL)
return (tree);

root = tree->left;
tree->left = root->right;

if (root->right != NULL)
root->right->parent = tree;

root->right = tree;
root->parent = tree->parent;
tree->parent = root;

return (root);
}
