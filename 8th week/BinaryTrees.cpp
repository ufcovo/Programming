Binary Trees:
-------------
a structere with a unique starting node called the root. In which each node
is capable  of having two child nodes and in which a unique path exits
from the root to every node.

Root:
-----
The top or base node of the tree structere.

Each node will have 0,1 or 2 children.

Level of a Node:
----------------
Number of branches on the path from the root to the node.

Height (Depth) of a binary tree:
--------------------------------
Number of nodes on the longest path from the root the a leaf.


Declaration of a node in a binary tree:
---------------------------------------

template <class T>
struct node
{
	T info;
	node <T> *llinl; 	//left link
	node <T> *rlink; 	// right link	
};

Binary Tree Traversals: Visiring each node of a tree
-----------------------

Preorder: Visit root (display root immediately), traverse left subtree, traverse right subtree

Inorder: Travers left subtree, visit root, traverse right subtree
	
Postorder: Traverse left subtree, traverse right subtree, visit root
































