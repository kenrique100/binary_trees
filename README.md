# 0x1D. C - Binary trees

## Explaination
- Trees are simply nodes connected together. Binary tree is a kind of data structure used for storage purposes. Each node of a binary tree can only have a maximum of two nodes called the children. A simple binary tree consists of the ROOT, PATH AND CHILD nodes. The root node is the node at the top of the tree.
- A tree can only have one root node and one path from the root node to any other node. The path is the sequence of nodes along the edges of a tree.
- The child node is the node below a given node connected by its edge downward. The child node is of two types - The ***LEFTCHILD*** and ***The RIGHTCHILD***. 
- According to the Binary Search Tree Representation the rightchild node is the node with its value greater than the value of its parent node. Meanwhile the Parent node is any node except the root node with one edge upward. Leaf node is the node without any child node, that is, the last or tail node at the end of every binary tree. Subtree is the descendants of a node. Visiting is all about checking the value of a node when control is on the node. Traversing is all about passing through nodes in a specific order.

- Binary Search Tree(BST) has basic operations which include: Insert: inserting an element in a tree or creating a tree. Search: searching for an element in a tree. Preorder Traversal: traversing a tree in a pre-order way. Inorder Traversal: traversing a tree in an in-order way. Postorder Traversal: traversing a tree in a post-order way.

- Insert Operation: The first insert operation in a tree is to create a tree. To insert an element in a tree first locate its location. Search from the root node and if the value you are looking for is less than the root node value, search for the empty location in the left subtree or node and insert the data or element. Otherwise, search for the empty location in the right subtree or node and insert the element or data.

- Search Operation: To perform a search for an element in a tree, start from the root node. If the value of the element being searched for is less than the that of the root node search for the element in the left subtree or node. Otherwise, search for the elment in the right subtree or node.

- Preorder Traversal: This type of traversal method is a situation whereby the root node is visited first, then the left subtree or node and finally to the right subtree or node.

- Inorder Operation: This type of traversal method is a situation whereby the left subtree or node is visited first, then the root node and finally the right subtree or node.

- Postorder Operation: This type of traversal method is a situation whereby the left subtree or node is visited first, then the right subtree or node and finally the root.

# Resources
### Read or watch:

- [Binary tree](https://en.wikipedia.org/wiki/Binary_tree) (note the first line: ***Not to be confused with B-tree.***)
- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://www.programiz.com/dsa/tree-traversal)
- [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

# General
- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

# More Info
## Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

### Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
### AVL Tree
```
typedef struct binary_tree_s avl_t;
```
### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

## Print function
To match the examples in the tasks, you are given [this function](https://github.com/alx-tools/0x1C.c)

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction

# Description of Files
0-binary_tree_node.c
## Create a node, and attach it to a parent if parent not null.
1-binary_tree_insert_left.c
## Insert a node as a left child.
2-binary_tree_insert_right.c
## Insert a node as a right child.
3-binary_tree_delete.c
## Delete a whole tree
4-binary_tree_is_leaf.c
## Check to see if a node is a leaf
5-binary_tree_is_root.c
## Check to see if a node is the root
6-binary_tree_preorder.c
## Traverse the tree in preorder
7-binary_tree_inorder.c
## Traverse the tree inorder
8-binary_tree_postorder.c
## Traverse the tree in postorder
9-binary_tree_height.c
## Calculate the tree height
10-binary_tree_depth.c
## Calculate the depth of the tree
11-binary_tree_size.c
12-binary_tree_leaves.c
13-binary_tree_nodes.c
14-binary_tree_balance.c
15-binary_tree_is_full.c
16-binary_tree_is_perfect.c
17-binary_tree_sibling.c
18-binary_tree_uncle.c
100-binary_trees_ancestor.c
101-binary_tree_levelorder.c
102-binary_tree_is_complete.c
103-binary_tree_rotate_left.c
104-binary_tree_rotate_right.c
110-binary_tree_is_bst.c
111-bst_insert.c
112-array_to_bst.c
113-bst_search.c
114-bst_remove.c
115-O
120-binary_tree_is_avl.c
121-avl_insert.c
122-array_to_avl.c
123-avl_remove.c
124-sorted_array_to_avl.c
125-O
130-binary_tree_is_heap.c
131-heap_insert.c
132-array_to_heap.c
133-heap_extract.c
134-heap_to_sorted_array.c
135-O