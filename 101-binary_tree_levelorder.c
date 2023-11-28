#include "binary_trees.h"
/**
  * binary_tree_levelorder - define function
  * @tree: root node of the tree
  * @func: function pointer to a function that accepts an integer
  */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *temp;
	int height, node_num, i, k;

	if (!tree || !func)
		return;
	temp = (binary_tree_t *)tree;
	height  = binary_tree_height(tree);
	for (node_num = 1, k = 0; k <= height; k++, node_num *= 2)
		;
	node_num--;
	printf("%d, %d\n", height, node_num);
	for (i = 0; --height >= 0; i++)
	{

	}
	temp++;
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}