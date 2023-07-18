#ifndef _TreeNode
#define _TreeNode

#include <stdio.h>
#include <stdlib.h>

typedef struct _island {
	int island_id;
	char ani_type;
	int quantity;
	int parent;
}Island;

typedef struct _treeNode {
	Island island;
	struct _treeNode* left, * right;
}TreeNode;

#endif