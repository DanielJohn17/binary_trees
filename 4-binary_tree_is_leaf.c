#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf or 0 if it is not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int check_leaf = 0;

	if (node)
	{
		if (!(node->left))
		{
			if (!(node->right))
				check_leaf = 1;
		}
	}

	if (check_leaf == 1)
		return (1);

	return (0);
}
