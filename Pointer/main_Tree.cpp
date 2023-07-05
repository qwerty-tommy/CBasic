#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "tree_Node.h"
#include "array_Stack.h"

void makeTree(TreeNode* root) {
	TreeNode* a = root, * b, * c, * d, * e, * f, * g;

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

	a->left = b;
	a->right = c;
	b->left = d;
	b->right = e;
	c->left = f;
	c->right = g;
	d->left = NULL;
	d->right = NULL;
	e->left = NULL;
	e->right = NULL;
	f->left = NULL;
	f->right = NULL;
	g->left = NULL;
	g->right = NULL;
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

	do {
		push(&st, cur);
		if (cur->left)
		{
			cur = cur->left;
		}
		

	} while (1);

	printf("\b\b");
}

void post_traverse(TreeNode* root) {

}

int main() {
	TreeNode* root;
	root = (TreeNode*)malloc(sizeof(TreeNode));

	makeTree(root);
	pre_traverse(root);
}