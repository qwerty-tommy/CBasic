#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "avl_Tree.h"

//AVLƮ��
//ex-01

//typedef struct Node {
//	int data;
//	int height;
//	struct Node* leftChild;
//	struct Node* rightChild;
//} Node;

//Node* root = NULL;
//
//void display(Node* node, int level)
//{
//	if (node != NULL) {
//		display(node->rightChild, level + 1);
//		printf("\n");
//
//		if (node == root) {
//			printf("ROOT : ");
//		}
//
//		for (int i = 0; i < level && node != root; i++)
//		{
//			printf("\t");
//		}
//		printf("%d(%d)", node->data, getHeight(node));
//		display(node->leftChild, level + 1);
//	}
//}
//
//
//int main() {
//	int n;
//	while (true) {
//		printf("�Է� :");
//		scanf("%d", &n);
//		root = insertNode(root, n);
//		display(root, 1);
//		printf("\n");
//	}
//}


#define MAX_NUM 7

void print_AVL_Tree(Node * cur) {
	if (cur->leftChild) print_AVL_Tree(cur->leftChild);
	printf("%d�� �̸�: %s, %s\n", cur->data.age, cur->data.name, (cur->data.gen == 'f') ? "����" : "����");
	if (cur->rightChild) print_AVL_Tree(cur->rightChild);
}

void print_Search_info(Node* cur, int target) {
	int count = 0;
	for (; cur!=NULL; count++)
	{
		printf("%d->",cur->data.age);
		if (cur->data.age < target) cur = cur->rightChild;
		else if (cur->data.age > target) cur = cur->leftChild;
		else break;
	}
	printf(" \b\b\b\b\n");

	if (cur==NULL) {
		printf("�׷� ������ ����� �����ϴ�.\n");
		return;
	}

	printf("%d�� �̸�: %s, %s\n", cur->data.age, cur->data.name, (cur->data.gen == 'f') ? "����" : "����");
}

int main() {
	Node* root=NULL;
	char name[][5] = { "eee","ccc", "bbb", "ddd", "ggg", "fff", "hhh" };
	int age[] = { 50,30,20,40,70,60,80 };
	char gen[] = "fmmfmff";

	element tmp;
	for (int i = 0; i < MAX_NUM; i++)
	{
		strcpy(tmp.name, name[i]);
		tmp.age = age[i];
		tmp.gen = gen[i];
		root = insertNode(root, tmp);
	}

	print_AVL_Tree(root);

	int sel;
	while (true)
	{
		printf("ã�� ���� ����� ���̴�? (����� 0) ");
		scanf("%d", &sel);

		if (sel == 0) return 0;
		print_Search_info(root,sel);
	}
}