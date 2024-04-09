# C - Binary Trees
**About:** In this project, we created a simple binary trees.
### A Binary Tree
A binary tree is a tree-type non-linear data structure with a maximum of two children for each parent. Every node in a binary tree has a left and right reference along with the data element. The node at the top of the hierarchy of a tree is called the root node.

## Objectives:
* To know what is a binary tree

A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. The binary tree is defined recursively: each child of a node is the root of a subtree that is also a binary tree. The topmost node in a binary tree is called the root, and nodes with no children are called leaves.

* To know what is the difference between a binary tree and a Binary Search Tree

Both binary trees and Binary Search Trees are hierarchical data structures with a tree-like organization, a Binary Search Tree is a more specialized form of a binary tree that enforces an ordering constraint, leading to improved efficiency in searching operations. The additional structure and rules of a BST make it particularly useful in scenarios where efficient search and retrieval are important considerations.

* To know what is the possible gain in terms of time complexity compared to linked lists. 

arrays are more efficient in terms of access time complexity, but linked lists are generally more efficient for insertion and deletion operations. The choice between them depends on the specific requirements of your application. If fast random access is crucial, arrays may be more suitable. If efficient insertions and deletions are more important, linked lists may be a better choice.

* To know the depth, the height, the size of a binary tree
The depth of a binary tree is the maximum depth among all the nodes in the tree. 
It is the length of the longest path from the root node to a leaf node. 
The height of a binary tree is the maximum height among all the nodes in the tree. 
It is the length of the longest path from the root node to a leaf node.
The size of a binary tree is the total number of nodes in the tree.

* To know What are the different traversal methods to go through a binary tree
Inorder Traversal method, you visit the left subtree, then the root node, and finally the right subtree. The order of traversal follows the pattern: left, root, right.
In Preorder Traversal, you visit the root node first, followed by the left subtree, and then the right subtree. The order of traversal is: root, left, right.
In Postorder Traversal involves visiting the left subtree, then the right subtree, and finally the root node. The order of traversal is: left, right, root.

* To know What is a complete, a full, a perfect, a balanced binary tree
A Complete Binary Tree is considered complete if all levels, except possibly the last, are completely filled, and all nodes are as left as possible. In other words, for a binary tree to be complete, each level must be filled from left to right, and the last level should be filled from left to right with no gaps except possibly on the rightmost side.
A Full Binary Tree is considered full (or proper or strict) if each node has either 0 or 2 children. In other words, every node in a full binary tree either has no children (leaf node) or has two children.
A Perfect binary tree is considered perfect if all of its levels are completely filled, and all nodes have two children. This means that a perfect binary tree has 2^k - 1 nodes at level k.
A Balanced binary tree is considered balanced if the height of the left and right subtrees of any node differ by at most one. In other words, the balance factor (the difference in height between the left and right subtrees) of every node in the tree is at most 1.


-**Binary Tree**

**Node-Based Representation:**
In the node-based representation, each node in the binary tree contains data and pointers to its left and right children (or subtrees).

**Array-Based Representation (Binary Heap):**
Binary trees can be efficiently represented using an array.
In a binary heap, the parent-child relationships are maintained based on the index positions in the array.
For a node at index i, its left child is at 2i + 1, and its right child is at 2i + 2.
This representation is used in binary heap data structures, which are particularly useful for implementing priority queues.

**Threaded Binary Trees:**
In threaded binary trees, additional pointers, called threads, are used to optimize tree traversal.
Threads can be either in-order threads (pointing to the in-order predecessor and successor) or pre-order threads.
This reduces the need for recursion or an explicit stack during traversal.

**Linked Representation with Parent Pointers:**
In addition to left and right pointers, each node can have a pointer to its parent.
This allows for easier navigation between nodes and simplifies certain operations, such as finding the parent of a given node.

**Balanced Binary Search Trees (AVL, Red-Black Trees):**
Balanced binary search trees are designed to maintain balance during insertions and deletions.
AVL trees and Red-Black trees are two popular implementations.
These trees ensure logarithmic height, resulting in efficient search, insertion, and deletion operations.

* To know the most common use cases of binary trees

**Most Common Use Cases of Binary Trees:**

1.Binary trees, are frequently used to implement symbol tables and dictionaries.
2.Binary trees are the foundation for binary heaps, which are essential data structures in priority queues.
3.Binary trees can be used to represent hierarchical file systems.
4.Binary trees, especially balanced ones like AVL trees or Red-Black trees, are used for indexing in databases.
5.Binary trees are employed in the representation and evaluation of mathematical expressions.

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* There is **README.md** file at the root of the **holbertonschool-binary_trees**
* Not allowed using global variable
* No more than 5 functions per file
* The C standard library is allowed
* The prototypes of all the functions were included in the header file called binary_trees.h
* All the header files are include guarded

## FILES
|File|Description|
|---|---|
|[README.md](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/README.md)|Information about this repository|
|[0-binary_tree_node.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/0-binary_tree_node.c)|Creates a binary tree node.|
|[1-binary_tree_insert_left.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/1-binary_tree_insert_left.c)| Inserts a node as the left-child of another node.|
|[2-binary_tree_insert_right.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/2-binary_tree_insert_right.c)| Inserts a node as the right-child of another node.|
|[3-binary_tree_delete.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/3-binary_tree_delete.c)|Deletes an entire binary tree.|
|[4-binary_tree_is_leaf.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/4-binary_tree_is_leaf.c)|Checks if a node is a leaf.|
|[5-binary_tree_is_root.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/5-binary_tree_is_root.c)|Checks if a given node is a root.|
|[6-binary_tree_preorder.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/6-binary_tree_preorder.c)|A function that goes through a binary tree using pre-order traversal.|
|[7-binary_tree_inorder.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/7-binary_tree_inorder.c)|A function that goes through a binary tree using in-order traversal.|
|[8-binary_tree_postorder.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/8-binary_tree_postorder.c)|A function that goes through a binary tree using post-order traversal.|
|[9-binary_tree_height.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/9-binary_tree_height.c)|Measures the height of a binary tree.|
|[10-binary_tree_depth.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/10-binary_tree_depth.c)|Measures the depth of a node in a binary tree.|
|[11-binary_tree_size.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/11-binary_tree_size.c)|Measures the size of a binary tree.|
|[12-binary_tree_leaves.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/12-binary_tree_leaves.c)|A function that counts the leaves in a binary tree|
|[13-binary_tree_nodes.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/13-binary_tree_nodes.c)|Counts the nodes with at least 1 child in a binary tree|
|[14-binary_tree_balance.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/14-binary_tree_balance.c)|Measures the balance factor of a binary tree|
|[15-binary_tree_is_full.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/15-binary_tree_is_full.c)|A function that checks if a binary tree is full|
|[16-binary_tree_is_perfect.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/16-binary_tree_is_perfect.c)|A function that checks if a binary tree is perfect|
|[17-binary_tree_sibling.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/17-binary_tree_sibling.c)|A function that finds the sibling of a node|
|[18-binary_tree_uncle.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/18-binary_tree_uncle.c)|A function that finds the uncle of a node|
|[binary_trees.h](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/binary_trees.h)|Including essential libraries and structs for this project.|
|[binary_tree_print.c](https://github.com/AysuAnar/holbertonschool-binary_trees/blob/main/binary_tree_print.c)|This function is used only for visualization purposes.|

Authors: _Fakhri Amanov and Aysu Mammadova_
