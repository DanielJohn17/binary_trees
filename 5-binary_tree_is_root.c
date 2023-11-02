#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if nose is a root
 * @node: pointer to node to check
 * Return: 1 if node is a root or 0 if it is not
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	int check_root = 0;

	if (node)
	{
		if (!(node->parent))
			check_root = 1;
	}

	if (check_root == 1)
		return (1);

	return (0);
}
