#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height = 0;
size_t nodes = 0;
size_t powert_tree = 0;

if (!tree)
return (0);

if (!tree->right && !tree->left)
return (1);

height = binary_tree_height(tree);
nodes = binary_tree_size(tree);

powert_tree = (size_t)power(2, height + 1);
return (powert_tree - 1 == nodes);
}


/**
 *power - value of x raised to the power of y
 *@x: exponentiate
 *@y: the power to raise x to
 *Return: x to the power of y, or -1 if y is less than 0
 */

int power(int x, int y)
{

if (y < 0)
return (-1);

if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}

}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the tree to measure its size
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
return (0);


return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
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
