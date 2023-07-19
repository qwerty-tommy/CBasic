//레벨,스레드순회

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "circular_Queue.h"
#include "tree_Node.h"

////ex1 - 이진트리 순회 + 큐 계산기
//int is_operator(int tar) {
//	return (tar == '+' || tar == '-' || tar == '*' || tar == '/');
//}
//
//int main() {
//	TreeNode tn1 = { 1,NULL,NULL };
//	TreeNode tn2 = { 4,NULL,NULL };
//	TreeNode tn3 = { '*',&tn1,&tn2 };
//	TreeNode tn4 = { 16,NULL,NULL };
//	TreeNode tn5 = { 25,NULL,NULL };
//	TreeNode tn6 = { '+',&tn4,&tn5 };
//	TreeNode tn7 = { '+',&tn3,&tn6 };
//
//	TreeNode* root = &tn7;
//
//	QueueType qt;
//	init(&qt);
//	enqueue(&qt, root);
//	TreeNode* cur;
//
//	while (!is_empty(&qt)) {
//		cur = peek(&qt);
//		if (cur->left) enqueue(&qt,cur->left);
//		if (cur->right) {
//			if (!is_operator(cur->left->data) && !is_operator(cur->right->data)) {
//
//			}
//			enqueue(&qt, cur->right);
//			if (cur->right) enqueue(&qt, cur->right);
//		}
//	}
//
//	//45
//}

//ex00 - 이진 트리 레벨 순회
void level_traversal(TreeNode* cur) {
	QueueType qt;
	init(&qt);
	enqueue(&qt, cur);

	while (!is_empty(&qt)){
		cur = dequeue(&qt);
		printf("%d -> ", cur->data);
		if (cur->left) enqueue(&qt, cur->left);
		if (cur->right) enqueue(&qt, cur->right);
	}
	printf("\n\nTraversal end..\n");
}

int main() {
	TreeNode tn1 = { 1,NULL,NULL };
	TreeNode tn2 = { 4,NULL,NULL };
	TreeNode tn3 = { '*',&tn1,&tn2 };
	TreeNode tn4 = { 16,NULL,NULL };
	TreeNode tn5 = { 25,NULL,NULL };
	TreeNode tn6 = { '+',&tn4,&tn5 };
	TreeNode tn7 = { '+',&tn3,&tn6 };

	level_traversal(&tn7);

	return 0;
}

////ex1 - 트리계산기 큐없이
////typedef struct _treeNode {
////	int data;
////	struct _treeNode* left, * right;
////}TreeNode;
//
//int cal_sibling(TreeNode* cur) {
//	if (!cur) return 0;
//	if (!cur->left && !cur->right) return cur->data;
//
//	int left = cal_sibling(cur->left);
//	int right = cal_sibling(cur->right);
//	switch (cur->data)
//	{
//	case '+':
//		return left + right;
//	case '-':
//		return left - right;
//	case '*':
//		return left * right;
//	case '/':
//		return left / right;
//	case '%':
//		return left % right;
//	case '>':
//		return left > right;
//	case '|':
//		return left || right;
//	case '&':
//		return left && right;
//	default:
//		break;
//	}
//	printf("Operator err..");
//	return -1;
//}
//
//int main() {
//	TreeNode tn1 = { 1,NULL,NULL };
//	TreeNode tn2 = { 4,NULL,NULL };
//	TreeNode tn3 = { '*',&tn1,&tn2 };
//	TreeNode tn4 = { 16,NULL,NULL };
//	TreeNode tn5 = { 25,NULL,NULL };
//	TreeNode tn6 = { '+',&tn4,&tn5 };
//	TreeNode tn7 = { '+',&tn3,&tn6 };
//
//	printf("계산결과 : %d", cal_sibling(&tn7));
//}

////ex2-디렉토리 용량 계산
//typedef struct _treeNode {
//	int size;
//	struct _treeNode* left, * right;
//}TreeNode;
//
//int cal_dir(TreeNode* root) {
//	if (!root) return 0;
//	else return cal_dir(root->left) + cal_dir(root->right) + root->size;
//}
//
//
//int main() {
//	TreeNode tn1 = { 500,NULL,NULL };
//	TreeNode tn2 = { 200,NULL,NULL };
//	TreeNode tn3 = { 100,&tn1,&tn2 };
//	TreeNode tn4 = { 50,NULL,NULL };
//	TreeNode tn5 = { 0,&tn3,&tn4 };
//
//	TreeNode* root = &tn5;
//	int size;
//
//	size=cal_dir(root);
//
//	printf("directory-size : %d", size);
//}

