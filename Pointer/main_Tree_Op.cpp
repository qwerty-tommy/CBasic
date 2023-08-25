

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include "tree_Node.h"
#include "array_Stack.h"
//이진탐색트리연산
// 
// 
////ex1~5 트리 삭제 삽인 연산
//typedef int element;
//int main() {
//	//TreeNode* root = make_tree1();
//	TreeNode* root = NULL;
//	int sel;
//	while (1) {
//		printf("1.print\n2.insert\n3.delete\n\nInput : ");
//		scanf("%d",&sel);
//
//		switch (sel)
//		{
//		case 1:
//			printf("%d\n", get_node_count(root));
//			printf("%d\n", get_terminal_count(root));
//			printf("%d\n", get_height(root));
//			print_tree(root);
//			break;
//		case 2:
//			printf("Input data : ");
//			scanf("%d", &sel);
//			insert_node(&root, sel);
//			break;
//		case 3:
//			printf("Input data : ");
//			scanf("%d", &sel);
//			delete_node(&root, sel);
//			break;
//		case 4:
//			printf("Exit..");
//			return 0;
//		default:
//			break;
//		}
//	}
//}
/*
2
35
2
18
2
68
2
7
2
26
2
99
2
3
2
12
2
22
2
30

*/


//ex6-영어사전
//typedef struct {
//	char eng[100];
//	char kor[100];
//}Element;
//
//typedef struct _treeNode {
//	Element data;
//	struct _treeNode* left, * right;
//
//}TreeNode;
//
//Element get_eng(TreeNode* root, char* key) {
//	TreeNode* cur;
//	StackType st;
//	init(&st);
//	push(&st, root);
//
//	
//	while (!is_empty(&st))
//	{
//		cur=pop(&st);
//		if (strcmp(cur->data.kor, key)==0) {
//			return cur->data;
//		}
//		if (cur->left) push(&st, cur->left);
//		if (cur->right) push(&st, cur->right);
//	}
//
//	//일치하지 않았을때 예외처리 해줘야함
//}
//
//int main() {
//	TreeNode* root=NULL;
//	Element tmp;
//	int sel;
//
//	while (1)
//	{
//		printf("=================\n");
//		printf("1. Add\n");
//		printf("2. Delete\n");
//		printf("3. Search\n");
//		printf("4. Print\n");
//		printf("5. Exit\n");
//		printf("=================\n");
//
//		scanf("%d",&sel);
//
//		switch (sel)
//		{
//		case 1:
//			printf("Input kor : ");
//			scanf("%s", tmp.kor);
//			printf("Input eng : ");
//			scanf("%s", tmp.eng);
//			insert_node(&root, tmp);
//			break;
//		case 2:
//			printf("Input kor : ");
//			scanf("%s", tmp.kor);
//			delete_node(&root, tmp);
//			break;
//		case 3:
//			printf("Input Kor : ");
//			scanf("%s", tmp.kor);
//			tmp = get_eng(root, tmp.kor);
//			printf("Kor : %s\tEng : %s\n", tmp.kor, tmp.eng);
//			break;
//		case 4:
//			print_tree(root);
//			break;
//		case 5:
//			return 0;
//		default:
//			break;
//		}
//		
//	}
//}

/*
1
안녕
hello
1
테스트
test
1
골프
golf
1
코딩
coding
1
카카오톡
kakaotalk
1
노래
song
1
비범한
extraordinary
1
카드
card

*/

////pr04 - 최대값, 최솟값
////typedef int Element;
//
//int get_max(TreeNode* root) {
//	TreeNode* cur=root;
//	while (1) {
//		if (!cur->right) {
//			return cur->data;
//		}
//		cur = cur->right;
//	}
//}
//
//int get_min(TreeNode* root) {
//	TreeNode* cur = root;
//	while (1) {
//		if (!cur->left) {
//			return cur->data;
//		}
//		cur = cur->left;
//	}
//}
//
//int main() {
//	//TreeNode* root = make_tree1();
//	TreeNode* root = NULL;
//	int sel;
//	while (1) {
//		printf("1.min,max\n2.insert\n3.delete\n\nSel : ");
//		scanf("%d",&sel);
//
//		switch (sel)
//		{
//		case 1:
//			print_tree(root);
//			printf("\nMax:%d\tmMin%d\n\n",get_max(root), get_min(root));
//			break;
//		case 2:
//			printf("Input data : ");
//			scanf("%d", &sel);
//			insert_node(&root, sel);
//			break;
//		case 3:
//			printf("Input data : ");
//			scanf("%d", &sel);
//			delete_node(&root, sel);
//			break;
//		case 4:
//			printf("Bye");
//			return 0;
//		default:
//			break;
//		}
//	}
//}
/*
2
35
2
18
2
68
2
7
2
26
2
99
2
3
2
12
2
22
2
30

*/

//이진탐색트리

//void menu() {
//	printf("***Std-Info search prog***\n");
//	printf("=======================\n");
//	printf("1. Input\n");
//	printf("2. Delete\n");
//	printf("3. Search\n");
//	printf("4. Print(Order by Std-ID)\n");
//	printf("5. Total Std num\n");
//	printf("6. 1st Std-Info\n");
//	printf("7. Std Average score\n");
//	printf("8. Init\n");
//	printf("9. Exit\n");
//	printf("=======================\n");
//	printf("Sel : ");
//}
//
//Element search(TreeNode* root, Element key) {
//	TreeNode* cur = root;
//	Element tmp;
//	tmp.ID = -1;
//
//	while (1)
//	{
//		if (!cur) return tmp;
//		if (cur->data.ID == key.ID) return cur->data;
//		if (cur->data.ID> key.ID) cur = cur->left;
//		else cur = cur->right;
//	}
//}
//
//void print_node(Element e) {
//	printf("%d\t%s\t%s\t%d\n",e.ID,e.name,e.department,e.score);
//}
//
//void print_node_inorder(TreeNode* root) {
//	TreeNode* cur=root;
//
//	if(cur->left) print_node_inorder(cur->left);
//	print_node(cur->data);
//	if (cur->right) print_node_inorder(cur->right);
//}
//
//Element get_max(TreeNode* root) {
//	TreeNode* cur=root;
//	StackType st;
//	Element max_tmp=root->data;
//
//	init(&st);
//	push(&st, cur);
//	while (!is_empty(&st)) {
//		cur=pop(&st);
//
//		if (cur->data.score > max_tmp.score) max_tmp = cur->data;
//
//		if (cur->right) push(&st,cur->right);
//		if (cur->left) push(&st,cur->left);
//	}
//
//	return max_tmp;
//}
//
//int get_total(TreeNode* root) {
//	TreeNode* cur = root;
//	int sum = cur->data.score;
//
//	if (cur->left) sum+= get_total(cur->left);
//	if (cur->right) sum+= get_total(cur->right);
//	return sum;
//}
//
//
//int main() {
//	TreeNode* root=NULL;
//	Element tmp;
//	int sel;
//
//	while(1){
//		menu();
//		scanf("%d", &sel);
//		switch (sel)
//		{
//		case 1:
//			printf("ID : ");
//			scanf("%d", &tmp.ID);
//			printf("Name : ");
//			scanf("%s", tmp.name);
//			printf("Department : ");
//			scanf("%s", tmp.department);
//			printf("Score : ");
//			scanf("%d", &tmp.score);
//			insert_node(&root, tmp);
//			break;
//		case 2:
//			printf("ID : ");
//			scanf("%d", &tmp.ID);
//			delete_node(&root, tmp);
//			break;
//		case 3:
//			printf("ID : ");
//			scanf("%d", &tmp.ID);
//			tmp = search(root, tmp);
//			if (tmp.ID == -1) printf("No data..\n");
//			else print_node(tmp);
//			break;
//		case 4:
//			if (root == NULL) printf("Empty");
//			else {
//				printf("Std-info list\n");
//				print_node_inorder(root);
//				printf("\n");
//			}
//			break;
//		case 5:
//			printf("Total Std num : %d\n", get_node_count(root));
//			break;
//		case 6:
//			printf("1st Std-Info\n");
//			print_node(get_max(root));
//			break;
//		case 7:
//			printf("Average : %d\n", get_total(root) / get_node_count(root));
//			break;
//		case 8:
//			root = NULL;
//			break;
//		case 9:
//			return 0;
//		default:
//			break;
//		}
//	}
//}

/*
1
777
ggg
physic
50
1
222
bbb
math
20
1
888
hhh
physic
100
1
111
aaa
math
80
1
333
ccc
eng
40
1
444
ddd
chemical
70
1
555
eee
chemical
90
1
999
iii
physic
60
1
666
fff
chemical
10


*/