#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "tree_Node.h"
#include "array_Stack.h"

//void makeTree(TreeNode* root) {
//	TreeNode* a = root, * b, * c, * d, * e, * f, * g, * e1, * e2, * e3, *e4;
//
//	a->data = 'A';
//
//	b = (TreeNode*)malloc(sizeof(TreeNode));
//	b->data = 'B';
//
//	c = (TreeNode*)malloc(sizeof(TreeNode));
//	c->data = 'C';
//
//	d = (TreeNode*)malloc(sizeof(TreeNode));
//	d->data = 'D';
//
//	e = (TreeNode*)malloc(sizeof(TreeNode));
//	e->data = 'E';
//
//	f = (TreeNode*)malloc(sizeof(TreeNode));
//	f->data = 'F';
//
//	g = (TreeNode*)malloc(sizeof(TreeNode));
//	g->data = 'G';
//
//	e1 = (TreeNode*)malloc(sizeof(TreeNode));
//	e1->data = 'E1';
//
//	e2 = (TreeNode*)malloc(sizeof(TreeNode));
//	e2->data = 'E2';
//
//	e3 = (TreeNode*)malloc(sizeof(TreeNode));
//	e3->data = 'E3';
//
//	e4 = (TreeNode*)malloc(sizeof(TreeNode));
//	e4->data = 'E4';
//
//	a->left = b;
//	a->right = c;
//	b->left = d;
//	b->right = e;
//	c->left = f;
//	c->right = g;
//	d->left = NULL;
//	d->right = NULL;
//	e->left = e1;
//	e->right = e2;
//	f->left = NULL;
//	f->right = NULL;
//	g->left = NULL;
//	g->right = NULL;
//
//	e1->left = NULL;
//	e1->right = NULL;
//
//	e2->left = e3;
//	e2->right = e4;
//
//	e3->left = NULL;
//	e3->right = NULL;
//
//	e4->left = NULL;
//	e4->right = NULL;
//
//}
//
//void pre_traverse(TreeNode* root) {
//	StackType st;
//	init(&st);
//
//	TreeNode* cur=root;
//
//	do
//	{
//		if (cur != NULL) {
//			if (cur->right != NULL) push(&st, cur->right);
//			printf("%c->", cur->data);
//			cur = cur->left;
//		}
//		else{
//			if (is_empty(&st)) break;
//			cur=pop(&st);
//		}
//	} while (1);
//
//	printf("\b\b ");
//}
//
//void in_traverse(TreeNode* root) {
//	StackType st;
//	init(&st);
//
//	TreeNode* cur = root;
//	push(&st, cur);
//	while (!is_empty(&st)) {
//		while (root!=NULL){
//			push(&st, root);
//			root = root->left;
//		}
//		printf("%c->", (root = pop(&st))->data);
//		root = root->right;
//	}
//
//	printf("\b\b\b\b ");
//}
//
//
//#define MAX_SIZE 11
//void post_traverse(TreeNode* root) {
//	element buf[MAX_SIZE];
//	StackType st;
//	init(&st);
//
//	TreeNode* cur = root;
//	int i = 0;
//	do
//	{
//		if (cur != NULL) {
//			if (cur->left != NULL) push(&st, cur->left);
//			buf[i++] = cur;
//			cur = cur->right;
//		}
//		else {
//			if (is_empty(&st)) break;
//			cur = pop(&st);
//		}
//	} while (1);
//
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		printf("%c->",buf[MAX_SIZE - i-1]->data);
//	}
//	printf("\b\b ");
//}

////전중후위순회
//int main() {
//	TreeNode* root;
//	root = (TreeNode*)malloc(sizeof(TreeNode));
//
//	makeTree(root);
//	//pre_traverse(root);
//	//in_traverse(root);
//	post_traverse(root);
//}


////pr07
//#define TREE_SIZE 11
//
//void makeTree_07(TreeNode* root) {
//	TreeNode* a = root, * b, * c, * d, * e, * f, * g, * e1, * e2, * e3, * e4;
//
//	a->data = 1;
//
//	b = (TreeNode*)malloc(sizeof(TreeNode));
//	b->data = 2;
//
//	c = (TreeNode*)malloc(sizeof(TreeNode));
//	c->data = 3;
//
//	d = (TreeNode*)malloc(sizeof(TreeNode));
//	d->data = 4;
//
//	e = (TreeNode*)malloc(sizeof(TreeNode));
//	e->data = 5;
//
//	f = (TreeNode*)malloc(sizeof(TreeNode));
//	f->data = 6;
//
//	g = (TreeNode*)malloc(sizeof(TreeNode));
//	g->data = 7;
//
//	e1 = (TreeNode*)malloc(sizeof(TreeNode));
//	e1->data = 8;
//
//	e2 = (TreeNode*)malloc(sizeof(TreeNode));
//	e2->data = 9;
//
//	e3 = (TreeNode*)malloc(sizeof(TreeNode));
//	e3->data = 10;
//
//	e4 = (TreeNode*)malloc(sizeof(TreeNode));
//	e4->data = 11;
//
//	a->left = b;
//	a->right = c;
//	b->left = d;
//	b->right = e;
//	c->left = f;
//	c->right = g;
//	d->left = NULL;
//	d->right = NULL;
//	e->left = e1;
//	e->right = e2;
//	f->left = NULL;
//	f->right = NULL;
//	g->left = NULL;
//	g->right = NULL;
//
//	e1->left = NULL;
//	e1->right = NULL;
//
//	e2->left = e3;
//	e2->right = e4;
//
//	e3->left = NULL;
//	e3->right = NULL;
//
//	e4->left = NULL;
//	e4->right = NULL;
//
//}
//
//void cache_parent(element root,int cache[TREE_SIZE]) {
//	element cur;
//	StackType st;
//
//	init(&st);
//	push(&st, root);
//
//	while (!is_empty(&st)) {
//		cur = pop(&st);
//		if (cur->left) {
//			cache[cur->left->data-1] = cur->data;
//			push(&st,cur->left);
//		}
//		if (cur->right) {
//			cache[cur->right->data-1] = cur->data;
//			push(&st, cur->right);
//		}
//	}
//}
//
//int main() {
//	element root=(element)malloc(sizeof(TreeNode));
//
//	makeTree_07(root);
//	int ans[TREE_SIZE] = { 0, };
//
//	cache_parent(root, ans);
//
//	for (int i = 1; i < TREE_SIZE; i++)
//	{
//		printf("%d 부모 : %d\n",i+1,ans[i]);
//	}
//}

//pr08
typedef struct _edge {
	int from;
	int to;
}Edge;

typedef struct _graph08 {
	Edge edges[100];
	int size;
}Graph08;

Graph08 tr[100];
int tree_num = 0;

void init_graphs() {
	for (int i = 0; i < 100; i++)
	{
		tr[i].size = 0;
	}
}

int find_graph_idx(int from, int to) {
	for (int i = 0; i < tree_num; i++)
	{
		for (int j = 0; j < tr[i].size; j++)
		{
			if (
				tr[i].edges[j].from == from ||
				tr[i].edges[j].to == from ||
				tr[i].edges[j].from == to ||
				tr[i].edges[j].to == to
				) {
				return i+1;
			}
		}
	}
	return 0;
}

int is_in(int* arr,int offset ,int target) {
	for (int i = 0; i < offset; i++)
	{
		if (arr[i] == target)	//스택에서 꺼낸 값이 방문한적 있는 값이면 false
		{
			return 1;
		}
	}
	return 0;
}

int is_tree(Graph08 graph) {
	StackType st;
	int visited[100];
	element cur;
	int a=0;
	int prev = -1;

	init(&st);
	push(&st, graph.edges[0].from);

	while (!is_empty(&st)) {
		cur = pop(&st);

		if(is_in(visited, a, cur)) return 0;
		
		for (int i = 0; i < graph.size; i++)
		{
			if (graph.edges[i].from == cur && !is_in(visited, a, graph.edges[i].to))
			{
				push(&st, graph.edges[i].to);
			}
			if (graph.edges[i].to == cur && !is_in(visited, a, graph.edges[i].from))
			{
				push(&st, graph.edges[i].from);
			}
		}
		visited[a++] = cur;
		prev = cur;
	}

	return 1;
}

//typedef int element;
int main() {
	int ver_size, edg_size;
	int from, to;

	init_graphs();

	printf("정점/간선 개수 : ");
	scanf("%d %d",&ver_size,&edg_size);

	int tmp;
	for (int i = 0; i < edg_size; i++)
	{
		scanf("%d %d", &from, &to);

		if (tmp = find_graph_idx(from, to)) {	
			//요소가 겹치는 트리가 있다면, 해당 트리에 간선 추가
			tr[tmp - 1].edges[tr[tmp - 1].size].from = from;
			tr[tmp - 1].edges[tr[tmp - 1].size].to= to;
			tr[tmp - 1].size++;
		}
		else {	
			//요소가 겹치는 트리가 없다면 트리를 새로 생성
			tr[tree_num].edges[0].from = from;
			tr[tree_num].edges[0].to = to;
			tr[tree_num].size++;
			tree_num++;
		}
	}

	int cnt=0;
	for (int i = 0; i < tree_num; i++)
	{
		if (is_tree(tr[i])) {
			cnt++;
		}
	}

	printf("%d", cnt);
}

/*
6 4
1 2
1 3
2 4
5 6
>2

8 7
1 2
2 5
2 4
2 3
3 6
6 7
7 8
>1

8 8
1 2
2 5
2 4
2 3
3 6
6 7
7 8
3 8
>0
*/