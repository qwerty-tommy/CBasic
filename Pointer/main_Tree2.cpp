//레벨,스레드순회

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
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

////ex00 - 이진 트리 레벨 순회
//void level_traversal(TreeNode* cur) {
//	QueueType qt;
//	init(&qt);
//	enqueue(&qt, cur);
//
//	while (!is_empty(&qt)){
//		cur = dequeue(&qt);
//		printf("%d -> ", cur->data);
//		if (cur->left) enqueue(&qt, cur->left);
//		if (cur->right) enqueue(&qt, cur->right);
//	}
//	printf("\n\nTraversal end..\n");
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
//	level_traversal(&tn7);
//
//	return 0;
//}

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

////ex02 - 스레드순회 - 중위
////typedef struct _treeNode {
////	int data;
////	struct _treeNode* left, * right;
////	int is_thread;
////}TreeNode;
//
//#define TRUE 1
//#define FALSE 0
//
//TreeNode n1 = { 'A',NULL,NULL,1 };
//TreeNode n2 = { 'B',NULL,NULL,1 };
//TreeNode n3 = { 'C',&n1,&n2,0 };
//TreeNode n4 = { 'D',NULL,NULL,1 };
//TreeNode n5 = { 'E',NULL,NULL,0 };
//TreeNode n6 = { 'F',&n4,&n5,0 };
//TreeNode n7 = { 'G',&n3,&n6,0 };
//TreeNode* exp = &n7;
//
//TreeNode* find_thread_successor(TreeNode* p) {
//	TreeNode* q = p->right;
//	if (q == NULL || p->is_thread == TRUE) return q;
//	while (q->left != NULL) q = q->left;
//	return q;
//}
//
//void thread_inorder(TreeNode* t) {
//	TreeNode* q;
//	q = t;
//	while (q->left) q = q->left;
//	do
//	{
//		printf("%c ", q->data);
//		q = find_thread_successor(q);
//	} while (q);
//}
//
//int main() {
//	n1.right = &n3;
//	n2.right = &n7;
//	n4.right = &n6;
//	thread_inorder(exp);
//}



//pr06 - 레벨순회 높이 구하기
// 
//typedef struct _treeNode {
//int data;
//struct _treeNode* left, * right;
//}TreeNode;
// 
// 
//#define MAX_HEIGHT 40
//
//void level_traversal(TreeNode* cur) {
//	TreeNode*** lvl_indicator;
//	lvl_indicator = (TreeNode***)malloc(MAX_HEIGHT * sizeof(TreeNode**));
//	for (int i = 0; i < MAX_HEIGHT; i++)
//	{
//		lvl_indicator[i] = (TreeNode**)malloc(1<<i * sizeof(TreeNode*));
//	}
//
//	QueueType qt;
//	init(&qt);
//	enqueue(&qt, cur);
//
//	int depth=0;
//	int idx = 0;
//	int flag = 0;
//
//	while (!is_empty(&qt)){
//		cur = dequeue(&qt);
//
//		//printf("%d -> ", cur->data);
//		if (cur->left) enqueue(&qt, cur->left);
//		if (cur->right) enqueue(&qt, cur->right);
//
//		//
//		flag = 0;
//		for (int i = 0; i < 1<<depth; i++)
//		{
//			if (depth != 0 && lvl_indicator[depth - 1][i] == cur) flag = 1;
//		}
//		if (flag == 0) {
//			depth++; idx = 0;
//		}
//
//		if (cur->left) lvl_indicator[depth][idx++] = cur->left;
//		if (cur->right) lvl_indicator[depth][idx++] = cur->right;
//	}
//
//
//	printf(" \b\b\n\nTraversal end..\n\n");
//
//	printf("height : %d\n",depth);
//	for (int i = 0; i < MAX_HEIGHT; i++)
//	{
//		printf("%d : [", i);
//		for (int j = 0; j < 1 << depth; j++)
//		{
//			printf("%d, ", lvl_indicator[i][j]->data);
//		}
//		printf("\b]\n");
//	}
//}



//void print_nodes_at_level(TreeNode* root, int level) {
//    if (root == NULL) return;
//
//    if (level == 0) {
//        printf("%d, ", root->data);
//    }
//    else if (level > 0) {
//        print_nodes_at_level(root->left, level - 1);
//        print_nodes_at_level(root->right, level - 1);
//    }
//}
//
//int get_tree_height(TreeNode* root) {
//    if (root == NULL) return -1;
//
//    int left_height = get_tree_height(root->left);
//    int right_height = get_tree_height(root->right);
//
//    return (left_height > right_height ? left_height : right_height) + 1;
//}
//
//void level_traversal_recur(TreeNode* cur, int depth) {
//    int tree_height = get_tree_height(cur);
//
//    printf("Height : %d\n", tree_height+1);
//
//    for (int i = 0; i <= tree_height; i++) {
//        printf("%d : [", i);
//        print_nodes_at_level(cur, i);
//        printf("\b\b]");
//        printf("\n");
//    }
//}
//
//int main() {
//	int vertex_size;
//	printf("vertex-size : ");
//	scanf("%d", &vertex_size);
//
//	TreeNode* tr = (TreeNode*)malloc(sizeof(TreeNode) * vertex_size);
//
//	printf("vertex\tleft_sib\tright-sib\n");
//
//	int a, b;
//	for (int i = 0; i < vertex_size; i++)
//	{
//		scanf("%d %d %d", &tr[i].data, &a,&b);
//		if (a == -1) tr[i].left = NULL;
//		else tr[i].left = &tr[a-1];
//		if (b == -1) tr[i].right = NULL;
//		else tr[i].right = &tr[b-1];
//	}
//
//	//level_traversal(&tr[0]);
//	level_traversal_recur(&tr[0], 0);
//}

/*
8
1 2 3
2 4 5
3 6 7
4 8 -1
5 -1 -1
6 -1 -1
7 -1 -1
8 -1 -1

19
1 2 3
2 4 5
3 6 7
4 8 -1
5 9 10
6 11 12
7 13 -1
8 -1 -1
9 14 15
10 -1 -1
11 16 -1
12 -1 -1
13 17 -1
14 -1 -1
15 18 -1
16 -1 -1
17 -1 19
18 -1 -1
19 -1 -1

*/

//pr07 - 같은 레벨 중 가장 너비가 큰 레벨과 그 레벨의 너비를 출력

//typedef struct _treeNode {
//    int data;
//    int order;
//    struct _treeNode* left, * right;
//}TreeNode;

int get_left_end(TreeNode* cur, int level) {
    
    if (cur == NULL) return 0;

    if (level == 0) {
        return cur->order;
    }
    else if (level > 0) {
        return get_left_end(cur->left, level - 1);
    }
}

int get_right_end(TreeNode* cur, int level) {

    if (cur == NULL) return 0;

    if (level == 0) {
        return cur->order;
    }
    else if (level > 0) {
        return get_right_end(cur->right, level - 1);
    }
}

int get_tree_height(TreeNode* root) {
    if (root == NULL) return -1;

    int left_height = get_tree_height(root->left);
    int right_height = get_tree_height(root->right);

    return (left_height > right_height ? left_height : right_height) + 1;
}

int order = 1;
void set_order(TreeNode* cur) {
    if (!cur) return;
    set_order(cur->left);
    cur->order = order++;
    set_order(cur->right);
}

void search(TreeNode* cur, int depth) {
    int tree_height = get_tree_height(cur);

    printf("Height : %d\n", tree_height + 1);

    //중위순회하면서 트리노드 구조체의 order값 입력
    set_order(cur);

    int max_level= 0;
    int max_length_all = 0;
    int cur_max_length;
    for (int i = 0; i <= tree_height; i++) {
        //해당레벨에서 너비가 가장 큰 너비 반환 후 각 레벨 별로 비교
        cur_max_length = get_right_end(cur, i) - get_left_end(cur, i);
        if (max_length_all >= cur_max_length) {
            max_length_all = max_length_all;
        }
        else {
            max_length_all = cur_max_length;
            max_level = i;
        }
    }

    printf("Widest width level : %d", max_level+1);
    printf("Widest width : %d", max_length_all+1);
}

int main() {
    int vertex_size;
    printf("vertex-size : ");
    scanf("%d", &vertex_size);

    TreeNode* tr = (TreeNode*)malloc(sizeof(TreeNode) * vertex_size);

    printf("vertex\tleft_sib\tright-sib\n");

    int a, b;
    for (int i = 0; i < vertex_size; i++)
    {
        scanf("%d %d %d", &tr[i].data, &a, &b);
        if (a == -1) tr[i].left = NULL;
        else tr[i].left = &tr[a - 1];
        if (b == -1) tr[i].right = NULL;
        else tr[i].right = &tr[b - 1];
    }

    search(&tr[0], 0);
}

/*
8
1 2 3
2 4 5
3 6 7
4 8 -1
5 -1 -1
6 -1 -1
7 -1 -1
8 -1 -1

19
1 2 3
2 4 5
3 6 7
4 8 -1
5 9 10
6 11 12
7 13 -1
8 -1 -1
9 14 15
10 -1 -1
11 16 -1
12 -1 -1
13 17 -1
14 -1 -1
15 18 -1
16 -1 -1
17 -1 19
18 -1 -1
19 -1 -1

*/