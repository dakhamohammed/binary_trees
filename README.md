# 0x1D. C - Binary trees

![Binary trees](https://github.com/dakhamohammed/binary_trees/blob/main/Binary_tree_v2.svg.png?raw=true)

## General
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

### Tasks:

* **0. New node**
  * Function that creates a binary tree node.
    * Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
    * Where `parent` is a pointer to the parent node of the node to create
    * And `value` is the value to put in the new node
    * When created, a node does not have any child

* **1. Insert left**
  * Function that inserts a node as the left-child of another node.
    * Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
    * Where `parent` is a pointer to the node to insert the left-child in
    * And `value` is the value to store in the new node
    * Function return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
    * If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

* **2. Insert right**
  * Function that inserts a node as the right-child of another node.
    * Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
    * Where `parent` is a pointer to the node to insert the right-child in
    * And `value` is the value to store in the new node
    * Function return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
    * If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

* **3. Delete**
  * Function that deletes an entire binary tree.
    * Prototype: `void binary_tree_delete(binary_tree_t *tree);`
    * Where `tree` is a pointer to the root node of the tree to delete
    * If `tree` is `NULL`, the function do nothing.

* **4. Is leaf**
  * Function that checks if a node is a leaf.
    * Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
    * Where `node` is a pointer to the node to check
    * Function return `1` if `node` is a leaf, otherwise `0`
    * If `node` is `NULL`, return `0`

