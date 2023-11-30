#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that goes through a binary tree
 * using pre-order traversal.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 *
 * Return: void, no return value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *tmp = NULL;

	if (tree == NULL  || (*func) == NULL)
	{
		return;
	}

	tmp = tree->right;

	while (tree != NULL)
	{
		func(tree->n);

		if (tree->left == LEAF)
		{
			func(tree->parent->right->n);
		}

		tree = tree->left;
	}

	while (tmp != NULL)
	{
		func(tmp->n);

		if (tmp->left == LEAF)
		{
			func(tmp->parent->right->n);
		}

		tmp = tmp->left;
	}
}

