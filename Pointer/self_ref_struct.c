#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

////ex1
//struct Letter
//{
//	char value;
//	struct Letter* next;
//};
//
//int main() {
//	char tmp;
//	struct Letter* start=NULL, *end=NULL; 
//	struct Letter* cur, *newNode;
//
//	while (1) {
//		printf("문자입력(종료=Q) : ");
//		scanf(" %c", &tmp);
//		if (tmp == 'Q') {
//			break;
//		}		
//		newNode=(struct Letter*)malloc(sizeof(struct Letter));
//		newNode->next = NULL;
//		newNode->value = tmp;
//		if (start == NULL)	{
//			start = end = newNode;
//		}
//		else {
//			end->next=newNode;
//			end = end->next;
//		}
//
//	}
//	
//	cur = start;
//	while (cur!=NULL) {
//		printf("%c", cur->value);
//		cur = cur->next;
//	}
//}

////ex2
//struct Letter
//{
//	char value;
//	struct Letter* next;
//};
//
//int main() {
//	char tmp;
//	struct Letter* start = (struct Letter*)malloc(sizeof(struct Letter)); 
//	struct Letter* cur = start;
//	printf("문자입력(종료=Q) : ");
//	scanf("%c", &tmp);
//	cur->value = tmp;
//
//	struct Letter* end = (struct Letter*)malloc(sizeof(struct Letter));
//	end->value = NULL;
//	
//	cur->next = end;
//
//	while (1) {
//		struct Letter* next=(struct Letter*)malloc(sizeof(struct Letter));
//		cur->next = next;
//		cur = cur->next;
//		printf("문자입력(종료=Q) : ");
//		scanf(" %c", &tmp);
//		if (tmp == 'Q') {
//			cur->next = end;
//			break;
//		}
//		cur->value = tmp;
//		cur->next = end;
//	}
//	
//	cur = start;
//	while (1)
//	{
//		printf("%c", cur->value);
//		cur = cur->next;
//		if (cur->next == end) return;
//	}
//}

////ex3
//struct Letter
//{
//	char value;
//	struct Letter* next;
//};
//
//int main() {
//	char tmp;
//	struct Letter* start = (struct Letter*)malloc(sizeof(struct Letter));
//	struct Letter* cur = start;
//	printf("문자입력(종료=Q) : ");
//	scanf("%c", &tmp);
//	cur->value = tmp;
//
//	struct Letter* end = (struct Letter*)malloc(sizeof(struct Letter));
//	end->value = NULL;
//
//	cur->next = end;
//
//	while (1) {
//		struct Letter* next = (struct Letter*)malloc(sizeof(struct Letter));
//		cur->next = next;
//		cur = cur->next;
//		printf("문자입력(종료=Q) : ");
//		scanf(" %c", &tmp);
//		if (tmp == 'Q') {
//			cur->next = end;
//			break;
//		}
//		cur->value = tmp;
//		cur->next = end;
//	}
//
//	cur = start;
//	int cnt = 0;
//	while (1)
//	{
//		if (97 <= cur->value && cur->value <= 122) cnt++;
//		cur = cur->next;
//		if (cur->next == end) break;
//	}
//	printf("%d", cnt);
//}
//
//////ex4
//struct Letter
//{
//	char value;
//	struct Letter* next;
//};
//
//void input(struct Letter* cur) {
//	char tmp;
//
//	printf("문자입력(종료=Q) : ");
//	scanf(" %c", &tmp);
//	cur->value = tmp;
//
//	struct Letter* end = (struct Letter*)malloc(sizeof(struct Letter));
//	end->value = NULL;
//
//	cur->next = end;
//
//	while (1) {
//		struct Letter* next = (struct Letter*)malloc(sizeof(struct Letter));
//		cur->next = next;
//		cur = cur->next;
//		printf("문자입력(종료=Q) : ");
//		scanf(" %c", &tmp);
//		if (tmp == 'Q') {
//			cur->next = end;
//			break;
//		}
//		cur->value = tmp;
//		cur->next = end;
//	}
//}
//
//void print_list(struct Letter* start) {
//	struct Letter* cur=start;
//
//	while (1)
//	{
//		printf("%c", cur->value);
//		cur = cur->next;
//		if (cur->next->value == NULL) return;
//	}
//}
//
//int search(struct Letter* start, char key) {
//	struct Letter* cur = start;
//	int cnt = 1;
//
//	while (1)
//	{
//		if (cur->value == key) return cnt;
//		cur = cur->next;
//		if (cur->next->value == NULL) return -1;
//		cnt++;
//	}
//}
//
//int main() {
//	struct Letter* start = (struct Letter*)malloc(sizeof(struct Letter));
//	struct Letter* cur = start;
//
//	int select;
//	int res;
//	char key;
//	while (1) {
//		printf("\n== 매뉴 ==\n");
//		printf("1. 문자입력\n");
//		printf("2. 리스트출력\n");
//		printf("3. 문자검색\n");
//		printf("4. 종료\n");
//
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			input(cur);
//			break;
//		case 2:
//			print_list(start);
//			break;
//		case 3:
//			printf("찾을 문자 : ");
//			scanf(" %c", &key);
//			res = search(start, key);
//			if (res == -1) printf("그런 문자는 존재하지 않습니다.\n");
//			else printf("%d번째에 %c가 있습니다.\n", res, key);
//			break;
//		case 4:
//			return;
//		default:
//			break;
//		}
//	}
//}

////ex5
//typedef struct _letter {
//	char data;
//	struct _letter* next;
//}Letter;
//
//void input(Letter** start_node, Letter** end_node, Letter* new_node) {
//	if (*start_node == NULL) {
//		*start_node = (Letter*)malloc(sizeof(Letter));
//		*end_node = (Letter*)malloc(sizeof(Letter));
//		*start_node = *end_node = new_node;
//	}
//	else {
//		(*end_node)->next = new_node;
//		*end_node = (*end_node)->next;
//	}
//}
//
//int main() {
//	Letter* start_a = NULL, * end_a = NULL, * cur_a = NULL;
//	Letter* start_b = NULL, * end_b = NULL, * cur_b = NULL;
//	Letter* new_node;
//	int select;
//
//	while (1) {
//		printf("\n1. A 자료입력\n");
//		printf("2. A 리스트출력\n");
//		printf("3. B 자료입력\n");
//		printf("4. B 리스트출력\n");
//		printf("5. C 리스트출력\n");
//		printf("==> 선택 ");
//
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			new_node = (Letter*)malloc(sizeof(Letter));
//			printf("입력 : ");
//			scanf(" %c", &new_node->data);
//			new_node->next = NULL;
//			input(&start_a, &end_a, new_node);
//			break;
//		case 2:
//			cur_a = start_a;
//			printf("A list : ");
//			while (cur_a != NULL) {
//				printf("%c ", cur_a->data);
//				cur_a = cur_a->next;
//			}
//			break;
//		case 3:
//			new_node = (Letter*)malloc(sizeof(Letter));
//			printf("입력 : ");
//			scanf(" %c", &new_node->data);
//			new_node->next = NULL;
//			input(&start_b, &end_b, new_node);
//			break;
//		case 4:
//			cur_b = start_b;
//			printf("B list : ");
//			while (cur_b != NULL) {
//				printf("%c ", cur_b->data);
//				cur_b = cur_b->next;
//			}
//			break;
//		case 5:
//			cur_a = start_a;
//			cur_b = start_b;
//			printf("C list : ");
//			while (1) {
//				if (cur_b == NULL) {
//					while (cur_a != NULL) {
//						printf("%c ", cur_a->data);
//						cur_a = cur_a->next;
//					}
//					break;
//				}
//				else if (cur_a == NULL) {
//					while (cur_b != NULL) {
//						printf("%c ", cur_b->data);
//						cur_b = cur_b->next;
//					}
//					break;
//				}
//				printf("%c ", cur_b->data);
//				printf("%c ", cur_a->data);
//				cur_a = cur_a->next;
//				cur_b = cur_b->next;
//			}
//			break;
//		default:
//			break;
//		}
//	}
//	
//}
//
///*
//1
//1
//1
//2
//1
//3
//1
//4
//3
//a
//3
//b
//3
//c
//
//*/

////ex6
//
//typedef struct _int {
//	int data;
//	struct _int* next;
//	struct _int* prev;
//}Int;
//
//void input(Int** start_node, Int** end_node, Int* new_node) {
//	if (*start_node == NULL) {
//		*start_node = (Int*)malloc(sizeof(Int));
//		*end_node = (Int*)malloc(sizeof(Int));
//		*start_node = *end_node = new_node;
//	}
//	else {
//		(*end_node)->next = new_node;
//		new_node->prev = (*end_node);
//		new_node = (*end_node);
//		*end_node = (*end_node)->next;
//	}
//}
//
//int main() {
//	Int* start = NULL, * end = NULL;
//	Int* new_node;
//
//	int size;
//	printf("입력할 자료의 개수를 입력하시오 : ");
//	scanf("%d", &size);
//
//	for (int i = 0; i < size; i++)
//	{
//		new_node = (Int*)malloc(sizeof(Int));
//		printf("%i번째 정수값 : ", i+1);
//		scanf(" %d", &new_node->data);
//		new_node->next = NULL;
//		new_node->prev = NULL;
//		input(&start, &end, new_node);
//	}
//
//	printf("\n입력된 값 :\t\t");
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d", start->data);
//		start = start->next;
//	}
//
//	printf("\n입력된 값 역순 :\t");
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d", end->data);
//		end = end->prev;
//	}
//
//}
/*
6
5
2
4
8
6
2

*/


//ex7
#include <time.h>
#define LIST_SIZE 30

typedef struct _int {
	int data;
	struct _int* next;
	struct _int* prev;
}Int;

void input(Int** start_node, Int** end_node, Int* new_node) {
	if (*start_node == NULL) {
		*start_node = (Int*)malloc(sizeof(Int));
		*end_node = (Int*)malloc(sizeof(Int));
		*start_node = *end_node = new_node;
	}
	else {
		(*end_node)->next = new_node;
		new_node->prev = (*end_node);
		new_node = (*end_node);
		*end_node = (*end_node)->next;
	}
}

void delete_odd(Int* start) {
	start = start->next;
	Int* tmp = start;
	for (int i = 1; i < LIST_SIZE; i+=2)
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		tmp = tmp->next->next;
	}
}

int main() {
	Int* start = NULL, * end = NULL, * cur = NULL;
	Int* new_node;

	srand(time(NULL));

	for (int i = 0; i < LIST_SIZE; i++)
	{
		new_node = (Int*)malloc(sizeof(Int));
		new_node->data = (int)rand()%100;
		new_node->next = NULL;
		new_node->prev = NULL;
		input(&start, &end, new_node);
	}

	printf("\n== 삭제 전 ==\n");
	cur = start;
	for (int i = 0; i < LIST_SIZE; i++)
	{
		if (i%5==0) printf("\n");
		printf("%d ", start->data);
		start = start->next;
	}

	delete_odd(start);
	printf("\n== 삭제 후 ==\n");
	cur = start;
	for (int i = 0; i < LIST_SIZE; i++)
	{
		if (i % 5 == 0) printf("\n");
		printf("%d ", end->data);
		end = end->prev;
	}

}