#include "tree_Node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//TreeNode* make_tree1()
//{
//	TreeNode* n8 = (TreeNode*)malloc(sizeof(TreeNode));
//	*n8 = { 8,NULL,NULL };
//	TreeNode* n7 = (TreeNode*)malloc(sizeof(TreeNode));
//	*n7 = { 7,NULL,NULL };
//	TreeNode* n6 = (TreeNode*)malloc(sizeof(TreeNode));
//	*n6 = { 6,n7,n8 };
//	TreeNode* n5 = (TreeNode*)malloc(sizeof(TreeNode));
//	*n5 = { 5,NULL,NULL };
//	TreeNode* n4 = (TreeNode*)malloc(sizeof(TreeNode));
//	*n4 = { 4,NULL,NULL };
//	TreeNode* n3 = (TreeNode*)malloc(sizeof(TreeNode));
//	*n3 = { 3,n4,NULL };
//	TreeNode* n2 = (TreeNode*)malloc(sizeof(TreeNode));
//	*n2 = { 2,n3,n5};
//	TreeNode* n1 = (TreeNode*)malloc(sizeof(TreeNode));
//	*n1 = { 1,n2,n6 };
//
//	return n1;
//}
//
//TreeNode* make_tree2() {
//	TreeNode* root;
//	insert_node(&root, 35);
//	insert_node(&root, 18);
//	insert_node(&root, 68);
//	insert_node(&root, 7);
//	insert_node(&root, 26);
//	insert_node(&root, 99);
//	insert_node(&root, 3);
//	insert_node(&root, 12);
//	insert_node(&root, 22);
//	insert_node(&root, 30);
//	return root;
//}

//void print_data(TreeNode* node) {
//	printf("%s : ", node->data.kor);
//	printf("%s\n", node->data.eng);
//}

void print_data(TreeNode* node) {
	printf("%d : \n", node->data.ID);
}

void print_spaces(int count) {
	for (int i = 0; i < count; i++) {
		printf(" ");
	}
}

void print_tree_recursive(TreeNode* node, int depth) {
	if (node == NULL) {
		return;
	}

	print_tree_recursive(node->right, depth + 1);

	print_spaces(4 * depth);
	print_data(node);

	print_tree_recursive(node->left, depth + 1);
}

void print_tree(TreeNode* root) {
	printf("\n====================\n");
	print_tree_recursive(root, 0);
	printf("\n====================\n\n");
}


int get_node_count(TreeNode* node)
{
	return (node != NULL) ? 1 + get_node_count(node->left) + get_node_count(node->right) : 0;
}

int get_terminal_count(TreeNode* node)
{
	int count = 0;
	if(node){
		if (!node->left && !node->right) return 1;
		else count = get_terminal_count(node->left) + get_terminal_count(node->right);
	}
	return count;
}

int get_height(TreeNode* node)
{
	int max_depth = -1;
	if (node) {
		max_depth = get_height(node->left) > get_height(node->right) ? get_height(node->left) : get_height(node->right);
	}
	return max_depth+1;
}

//int compare(Element a, Element b) {
//	return strcmp(a.kor, b.kor);
//}

//int compare(Element a, Element b) {
//	return a> b;
//}

int compare(Element a, Element b) {
	return a.ID- b.ID;
}

void insert_node(TreeNode** curptr, Element key) {
	TreeNode* cur = *curptr;
	if(!cur){
		TreeNode* new_node = (TreeNode*)malloc(sizeof(TreeNode));
		new_node->data = key;
		new_node->left = NULL;
		new_node->right = NULL;
		*curptr = new_node;
		return;
	}
	
	if (compare(key, cur->data)>0) insert_node(&cur->right, key);
	else insert_node(&cur->left, key);
}

void delete_node(TreeNode** curptr, Element key) {
	TreeNode* cur = *curptr;

	if (cur == NULL) {
		printf("Node with key %d not found.\n", key);
		return;
	}

	if (compare(key, cur->data)>0) delete_node(&cur->right, key);
	else if (compare(key, cur->data)<0) delete_node(&cur->left, key);
	else {
		if (cur->left == NULL) {
			TreeNode* tmp = cur;
			*curptr = cur->right;
			free(tmp);
		}
		else if (cur->right == NULL) {
			TreeNode* tmp = cur;
			*curptr = cur->left;
			free(tmp);
		}
		else {
			TreeNode* tmp = cur->right;
			while (tmp->left) {
				tmp = tmp->left;
			}

			cur->data = tmp->data;

			delete_node(&cur->right, tmp->data);
		}
	}
}
