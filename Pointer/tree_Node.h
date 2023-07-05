#ifndef _TreeNode
#define _TreeNode

#include <stdio.h>
#include <stdlib.h>

typedef struct _treeNode {
	char data;
	struct _treeNode* left, * right;
}TreeNode;

#endif