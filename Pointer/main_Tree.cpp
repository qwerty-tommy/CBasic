#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "tree_Node.h"
#include "array_Stack.h"

void makeTree(TreeNode* root) {
	TreeNode* a = root, * b, * c, * d, * e, * f, * g, * e1, * e2, * e3, *e4;

	a->data = 'A';

	b = (TreeNode*)malloc(sizeof(TreeNode));
	b->data = 'B';

	c = (TreeNode*)malloc(sizeof(TreeNode));
	c->data = 'C';

	d = (TreeNode*)malloc(sizeof(TreeNode));
	d->data = 'D';

	e = (TreeNode*)malloc(sizeof(TreeNode));
	e->data = 'E';

	f = (TreeNode*)malloc(sizeof(TreeNode));
	f->data = 'F';

	g = (TreeNode*)malloc(sizeof(TreeNode));
	g->data = 'G';

	e1 = (TreeNode*)malloc(sizeof(TreeNode));
	e1->data = 'E1';

	e2 = (TreeNode*)malloc(sizeof(TreeNode));
	e2->data = 'E2';

	e3 = (TreeNode*)malloc(sizeof(TreeNode));
	e3->data = 'E3';

	e4 = (TreeNode*)malloc(sizeof(TreeNode));
	e4->data = 'E4';

	a->left = b;
	a->right = c;
	b->left = d;
	b->right = e;
	c->left = f;
	c->right = g;
	d->left = NULL;
	d->right = NULL;
	e->left = e1;
	e->right = e2;
	f->left = NULL;
	f->right = NULL;
	g->left = NULL;
	g->right = NULL;

	e1->left = NULL;
	e1->right = NULL;

	e2->left = e3;
	e2->right = e4;

	e3->left = NULL;
	e3->right = NULL;

	e4->left = NULL;
	e4->right = NULL;

}

void pre_traverse(TreeNode* root) {
	StackType st;
	init(&st);

	TreeNode* cur=root;

	do
	{
		if (cur != NULL) {
			if (cur->right != NULL) push(&st, cur->right);
			printf("%c->", cur->data);
			cur = cur->left;
		}
		else{
			if (is_empty(&st)) break;
			cur=pop(&st);
		}
	} while (1);

	printf("\b\b ");
}

void in_traverse(TreeNode* root) {
	StackType st;
	init(&st);

	TreeNode* cur = root;
	push(&st, cur);
	while (!is_empty(&st)) {
		while (root!=NULL){
			push(&st, root);
			root = root->left;
		}
		printf("%c->", (root = pop(&st))->data);
		root = root->right;
	}

	printf("\b\b\b\b ");
}


#define MAX_SIZE 11
void post_traverse(TreeNode* root) {
	element buf[MAX_SIZE];
	StackType st;
	init(&st);

	TreeNode* cur = root;
	int i = 0;
	do
	{
		if (cur != NULL) {
			if (cur->left != NULL) push(&st, cur->left);
			buf[i++] = cur;
			cur = cur->right;
		}
		else {
			if (is_empty(&st)) break;
			cur = pop(&st);
		}
	} while (1);

	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf("%c->",buf[MAX_SIZE - i-1]->data);
	}
	printf("\b\b ");
}

int main() {
	TreeNode* root;
	root = (TreeNode*)malloc(sizeof(TreeNode));

	makeTree(root);
	//pre_traverse(root);
	//in_traverse(root);
	post_traverse(root);
}