# Binary-Trees
This repo is for practicing binary search trees, how to build them and how to define the appropriate operations on it as they widely used in the search operation due to their efficiency in traversing and low complexity relative to other ADTs

## General Notes
- Depending on the mathematical analysis of binary search conducted on arrays, we come up with this idea behind Binary search tress
&nbsp;
- Binary search tress (BST) is a special case, which is more efficient, of binary tress (BT) such that each node having all nodes on its right side greater thean it by only one sequentially and vice versa for its left side, so each node is greater than its excatly left node and less than its right node and so on
&nbsp;

## Notes on Height of tree
- **Definition**: The height of a tree is the total number of nodes on the path from the root node to the deepest node in the tree.
- **Root Node**: A tree with only a root node has a height of **1**.
- **Binary Tree Height**: For a binary tree of height **h**:
  - It has at least **h** nodes.
  - It can have at most **2^{h-1}** nodes.
  - Every level will have at least one node and can have at most two nodes.
  - If every level has two nodes, then a tree with height **h** will have at most **2^{h-1}** nodes.
- **Height of Binary Tree with n Nodes**:
  - The height of a binary tree with **n** nodes is at least **log₂(n + 1)** and at most **n**.

  
