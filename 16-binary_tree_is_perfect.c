#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height, nodes, num_nodes;

if (tree)
{
height = binary_tree_height(tree);
nodes = binary_tree_leaves(tree);

num_nodes = (int) (1 << height);
if (nodes == num_nodes)
return (1);
}
return (0);
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

/**
 * binary_tree_nodes - number of nodes
 * @tree: the tree to count its nodes
 * Return: size of tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
int nodes = 0;

if (tree)
{
if (tree->left)
nodes += binary_tree_leaves(tree->left);

if (tree->right)
nodes += binary_tree_leaves(tree->right);

if (tree->left == tree->right)
return (++nodes);

return (nodes);
}

return (0);
}
