#pragma once
#ifndef _TreeNode
#define _TreeNode

//typedef struct _element {
//	int island_id;
//	char ani_type;
//	int quantity;
//	int parent;
//}Element;

//typedef struct {
//	char eng[100];
//	char kor[100];
//}Element;

//typedef int Element;

typedef struct {
	int ID;
	char name[100];
	char department[100];
	int score;
}Element;

typedef struct _treeNode {
	Element data;
	struct _treeNode* left, * right;
	
}TreeNode;

//TreeNode* make_tree1();
//TreeNode* make_tree2();
void print_tree(TreeNode*); //print_data 함수 수정 필요
int get_node_count(TreeNode*);
int get_terminal_count(TreeNode*);
int get_height(TreeNode*);
void insert_node(TreeNode**, Element); //compare 함수 수정 필요
void delete_node(TreeNode**, Element); //compare 함수 수정 필요
#endif