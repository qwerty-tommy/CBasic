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
//	Letter* start_c = NULL, * end_c = NULL, * cur_c = NULL;
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
//			start_c = NULL; end_c = NULL; cur_c = NULL;
//			cur_a = start_a;
//			cur_b = start_b;
//			while (1) {
//				new_node = (Letter*)malloc(sizeof(Letter));
//				new_node->next = NULL;
//				if (cur_b == NULL) {
//					while (cur_a != NULL) {
//						new_node->data = cur_a->data;
//						input(&start_c, &end_c, new_node);
//						cur_a = cur_a->next;
//					}
//					break;
//				}
//				else if (cur_a == NULL) {
//					while (cur_b != NULL) {
//						new_node->data = cur_b->data;
//						input(&start_c, &end_c, new_node);
//						cur_b = cur_b->next;
//					}
//					break;
//				}
//				new_node->data = cur_a->data;
//				input(&start_c, &end_c, new_node);
//				cur_a = cur_a->next;
//
//				new_node = (Letter*)malloc(sizeof(Letter));
//				new_node->data = cur_b->data;
//				input(&start_c, &end_c, new_node);
//				cur_b = cur_b->next;
//			}
//			cur_c = start_c;
//			printf("C list : ");
//			while (cur_c != NULL) {
//				printf("%c ", cur_c->data);
//				cur_c = cur_c->next;
//			}
//			break;
//		default:
//			break;
//		}
//	}
//	
//}

/*
1
1
1
2
1
3
1
4
3
a
3
b
3
c

*/

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
///*
//6
//5
//2
//4
//8
//6
//2
//
//*/


////ex7,8
//#include <time.h>
//#define LIST_SIZE 30
//
//typedef struct _int {
//	int data;
//	struct _int* next;
//	struct _int* prev;
//}Int;
//
//void input(Int** start_node, Int** end_node, Int* new_node) {
//	if (*start_node == NULL) {
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
//void delete_odd(Int** start,Int** cur, Int** end) {
//	*start = (*start)->next;
//	(*start)->prev = NULL;
//	*cur = *start;
//	*cur = (*cur)->next;
//
//	for (int i = 2; i < LIST_SIZE-1; i+=2)
//	{
//		(*cur)->prev->next = (*cur)->next;
//		(*cur)->next->prev = (*cur)->prev;
//		(*cur) = (*cur)->next->next;
//	}
//
//}
//
//int main() {
//	Int* start = NULL, * end = NULL, * cur = NULL;
//	Int* new_node;
//
//	srand(time(NULL));
//
//	for (int i = 0; i < LIST_SIZE; i++)
//	{
//		new_node = (Int*)malloc(sizeof(Int));
//		new_node->data = (int)rand()%100;
//		new_node->next = NULL;
//		new_node->prev = NULL;
//		input(&start, &end, new_node);
//	}
//
//	printf("\n== 삭제 전 ==\n");
//	cur = start;
//	for (int i = 0; i < LIST_SIZE; i++)
//	{
//		if (i%5==0) printf("\n");
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//
//	cur = start;
//	delete_odd(&start,&cur, &end);
//
//	printf("\n== 삭제 후 ==\n");
//	cur = start;
//	for (int i = 0; i < LIST_SIZE/2; i++)
//	{
//		if (i % 5 == 0) printf("\n");
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//
//	printf("\n== 삭제 후 역 ==\n");
//	cur = start;
//	for (int i = 0; i < LIST_SIZE / 2; i++)
//	{
//		if (i % 5 == 0) printf("\n");
//		printf("%d ", end->data);
//		end = end->prev;
//	}
//
//}


////ex 9,10
//#include <time.h>
//#define LIST_SIZE 100
//
//typedef struct _int {
//	int data;
//	struct _int* next;
//	struct _int* prev;
//}Int;
//
//void input(Int** start_node, Int** end_node, Int* new_node) {
//	if (*start_node == NULL) {
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
//void sort(Int** start, Int** cur, Int** end) {
//	int tmp;
//	for (int i = LIST_SIZE-1; i >= 0 ; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if ((*cur)->next->data < (*cur)->data) {
//				tmp = (*cur)->next->data;
//				(*cur)->next->data = (*cur)->data;
//				(*cur)->data = tmp;
//			}
//			(*cur) = (*cur)->next;
//		}
//		(*cur) = (*start);
//	}
//
//}
//
//int main() {
//	Int* start = NULL, * end = NULL, * cur = NULL;
//	Int* new_node;
//
//	srand(time(NULL));
//
//	for (int i = 0; i < LIST_SIZE; i++)
//	{
//		new_node = (Int*)malloc(sizeof(Int));
//		new_node->data = (int)rand() % 100;
//		new_node->next = NULL;
//		new_node->prev = NULL;
//		input(&start, &end, new_node);
//	}
//
//	printf("\n== 정렬 전 ==\n");
//	cur = start;
//	for (int i = 0; i < LIST_SIZE; i++)
//	{
//		if (i % 5 == 0) printf("\n");
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//
//	cur = start;
//	sort(&start, &cur, &end);
//
//	printf("\n== 정렬 후 ==\n");
//	cur = start;
//	for (int i = 0; i < LIST_SIZE ; i++)
//	{
//		if (i % 5 == 0) printf("\n");
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//
//	printf("\n== 정렬 후 역 ==\n");
//	cur = start;
//	for (int i = 0; i < LIST_SIZE ; i++)
//	{
//		if (i % 5 == 0) printf("\n");
//		printf("%d ", end->data);
//		end = end->prev;
//	}
//
//}
//

////ex 11
//int list_size = 0;
//
//typedef struct _std {
//	int id;
//	char name[20];
//	int kor;
//	int eng;
//	int math;
//	struct _std* next;
//}StdInfo;
//
//void concat(StdInfo** start_node, StdInfo** end_node, StdInfo* new_node) {
//	if (*start_node == NULL) {
//		*start_node = *end_node = new_node;
//	}
//	else {
//		(*end_node)->next = new_node;
//		*end_node = new_node;
//		(*end_node)->next = NULL;
//	}
//}
//
//void input(StdInfo** new_node) {
//	char buf[20];
//	printf("학번 : ");
//	scanf("%d", &(*new_node)->id);
//	printf("이름 : ");
//	scanf("%s", buf);
//	strcpy((*new_node)->name, buf);
//	printf("국어 : ");
//	scanf("%d", &(*new_node)->kor);
//	printf("영어 : ");
//	scanf("%d", &(*new_node)->eng);
//	printf("수학 : ");
//	scanf("%d", &(*new_node)->math);
//}
//
//StdInfo* search(int key, StdInfo** cur) {
//	while ((*cur) != NULL) {
//		if ((*cur)->id == key) {
//			return (*cur);
//		}
//		(*cur) = (*cur)->next;
//	}
//	StdInfo* tmp = (StdInfo*)malloc(sizeof(StdInfo));
//	tmp->id = -1;
//	return tmp;
//}
//
//int del(int key, StdInfo** cur, StdInfo** start) {
//	if ((*start) == NULL) return -1;
//	else if ((*start)->id == key) {
//		(*start) = (*start)->next;
//		return 0;
//	}
//	while ((*cur)->next != NULL) {
//		if ((*cur)->next->id == key) {
//			(*cur)->next = (*cur)->next->next;
//			return 0;
//		}
//		(*cur) = (*cur)->next;
//	}
//	if ((*cur)->next->id == key) {
//		(*cur)->next = NULL;
//		return 0;
//	}
//	return -1;
//}
//
//void sort(StdInfo** start, StdInfo** end) {
//	StdInfo** arc = (StdInfo**)malloc(list_size * sizeof(StdInfo*));
//	StdInfo* cur = *start;
//	for (int i = 0; i < list_size; i++)
//	{
//		arc[i] = cur;
//		cur =cur->next;
//	}
//
//	//cur = *start;
//	//int i = 0;
//	//while (cur != NULL) {
//	//	printf("%d\t%s\t%d\t%d\t%d\n", cur->id, cur->name, cur->kor, cur->eng, cur->math);
//	//	printf("%d\t%s\t%d\t%d\t%d\n", arc[i]->id, arc[i]->name, arc[i]->kor, arc[i]->eng, arc[i]->math);
//	//	cur = cur->next;
//	//	i++;
//	//}
//	//printf("\n\n");
//
//	StdInfo tmp_std;
//
//	for (int i = 0; i < list_size-1; i++)
//	{
//		if (arc[i]->id > arc[i + 1]->id) {
//			tmp_std = (*arc[i]);
//			(*arc[i]) = (*arc[i + 1]);
//			(*arc[i + 1]) = tmp_std;
//			arc[i + 1]->next = arc[i]->next;
//			arc[i]->next = arc[i+1];
//		}
//	}
//
//	//cur = *start;
//	//while (cur != NULL) {
//	//	printf("%d\t%s\t%d\t%d\t%d\n", cur->id, cur->name, cur->kor, cur->eng, cur->math);
//	//	cur = cur->next;
//	//}
//}
//
//int main() {
//	StdInfo* start = NULL, * end = NULL, * cur = NULL;
//	StdInfo* new_node;
//
//	int sel;
//	int tmp = 0;
//	char flag;
//	char buf[20];
//
//	while (1) {
//		printf("1.입력\t2.출력\t3.검색\t4.변경\t5.삭제\t6.삽입\t7.정렬\t8.종료\n==> 선택 ");
//		scanf("%d", &sel);
//		switch (sel)
//		{
//		case 1:
//			while (1) {
//				list_size++;
//				new_node = (StdInfo*)malloc(sizeof(StdInfo));
//				input(&new_node);
//				concat(&start, &end, new_node);
//				printf("계속?(y/n) ");
//				scanf("%c", &flag);
//				scanf("%c", &flag);
//				if (flag == 'n') break;
//			}
//
//			printf("입력완료\n\n");
//			break;
//		case 2:
//			cur = start;
//			while (cur != NULL) {
//				printf("%d\t%s\t%d\t%d\t%d\n", cur->id, cur->name, cur->kor, cur->eng, cur->math);
//				cur = cur->next;
//			}
//			break;
//		case 3:
//			cur = start;
//			printf("학번 : ");
//			scanf("%d", &tmp);
//			cur = search(tmp, &cur);
//			if (cur->id == -1) {
//				printf("해당정보를 찾을 수 없습니다.\n\n");
//			}
//			else {
//				printf("검색완료\n\n");
//				printf("%d\t%s\t%d\t%d\t%d\n", cur->id, cur->name, cur->kor, cur->eng, cur->math);
//			}
//			break;
//		case 4:
//			cur = start;
//			printf("학번 : ");
//			scanf("%d", &tmp);
//			cur = search(tmp, &cur);
//			if (cur->id == -1) {
//				printf("해당정보를 찾을 수 없습니다.\n\n");
//			}
//			else {
//				input(&cur);
//				printf("수정완료\n\n");
//			}
//			break;
//		case 5:
//			cur = start;
//			printf("학번 : ");
//			scanf("%d", &tmp);
//			if (del(tmp, &cur, &start) == -1) {
//				printf("해당정보를 찾을 수 없습니다.\n\n");
//			}
//			else {
//				printf("삭제완료\n\n");
//				list_size--;
//			}
//			break;
//		case 6:
//			list_size++;
//			cur = start;
//			printf("몇 번째?");
//			scanf("%d", &tmp);
//			for (int i = 0; i < tmp-2; i++) cur = cur->next;
//
//			new_node = (StdInfo*)malloc(sizeof(StdInfo));
//			input(&new_node);
//
//			new_node->next = cur->next;
//			cur->next = new_node;
//			break;
//		case 7:
//			sort(&start, &end);
//			cur = start;
//			while (cur != NULL) {
//				printf("%d\t%s\t%d\t%d\t%d\n", cur->id, cur->name, cur->kor, cur->eng, cur->math);
//				cur = cur->next;
//			}
//			break;
//		case 8:
//			return;
//		default:
//			break;
//		}
//	}
//}
//
/*
1
100
AAA
30
40
50
y
101
BBB
60
40
10
y
102
CCC
10
10
10
y
103
DDD
70
90
80
y
104
EEE
10
20
10
n
2
3
101
4
101
201
BBB
100
100
100
5
201
2
6
2
999
ZZZ
99
99
99
2
7

*/


//ex 11
int list_size = 0;

typedef struct _std {
	char name[20];
	int phone_num;
	int birth;
	struct _std* next;
	struct _std* prev;
}StdInfo;

void concat(StdInfo** start_node, StdInfo** end_node, StdInfo* new_node) {
	if (*start_node == NULL) {
		*start_node = *end_node = new_node;
	}
	else {
		(*end_node)->next = new_node;
		new_node->prev = (*end_node);
		*end_node = new_node;
		(*end_node)->next = NULL;
	}
}

void input(StdInfo** new_node) {
	char buf[20];
	printf("이름 : ");
	scanf("%s", buf);
	strcpy((*new_node)->name, buf);
	printf("전화번호 : "); 
	scanf("%d", &(*new_node)->phone_num);
	printf("생일 : ");
	scanf("%d", &(*new_node)->birth);
}

StdInfo* search(char* key, StdInfo** cur) {
	while ((*cur) != NULL) {
		if (strcmp((*cur)->name, key)==0) {
			return (*cur);
		}
		(*cur) = (*cur)->next;
	}
	StdInfo* tmp = (StdInfo*)malloc(sizeof(StdInfo));
	tmp->phone_num = -1;
	return tmp;
}

int del(char* key, StdInfo** start, StdInfo** del) {
	StdInfo* cur = *start;
	if ((*start) == NULL) return -1;
	else if (strcmp((*start)->name, key)==0) {
		(*start) = (*start)->next;
		return 0;
	}
	while (cur->next != NULL) {
		if (strcmp(cur->next->name, key)==0) {
			cur->next = cur->next->next;
			return 0;
		}
		cur = cur->next;
	}
	if (strcmp(cur->name, key)==0) {
		cur->next = NULL;
		(*del) = cur;
		return 0;
	}
	return -1;
}

void sort(StdInfo** start, StdInfo** end) {
	StdInfo** arc = (StdInfo**)malloc(list_size * sizeof(StdInfo*));
	StdInfo* cur = *start;
	for (int i = 0; i < list_size; i++)
	{
		arc[i] = cur;
		cur = cur->next;
	}

	//cur = *start;
	//int i = 0;
	//while (cur != NULL) {
	//	printf("%d\t%s\t%d\t%d\t%d\n", cur->id, cur->name, cur->kor, cur->eng, cur->math);
	//	printf("%d\t%s\t%d\t%d\t%d\n", arc[i]->id, arc[i]->name, arc[i]->kor, arc[i]->eng, arc[i]->math);
	//	cur = cur->next;
	//	i++;
	//}
	//printf("\n\n");

	StdInfo tmp_std;

	for (int i = 0; i < list_size - 1; i++)
	{
		if (strcmp(arc[i]->name, arc[i + 1]->name)>0) {
			tmp_std = (*arc[i]);
			(*arc[i]) = (*arc[i + 1]);
			(*arc[i + 1]) = tmp_std;
			arc[i + 1]->next = arc[i]->next;
			arc[i]->next = arc[i + 1];
		}
	}

	//cur = *start;
	//while (cur != NULL) {
	//	printf("%d\t%s\t%d\t%d\t%d\n", cur->id, cur->name, cur->kor, cur->eng, cur->math);
	//	cur = cur->next;
	//}
}

int main() {
	StdInfo* start = NULL, * end = NULL, * cur = NULL;
	StdInfo* new_node;

	int sel;
	int tmp = 0;
	char flag;
	char buf[20];

	while (1) {
		printf("1.입력\t2.출력\t3.검색\t4.변경\t5.삭제\t6.삽입\t7.정렬\t8.종료\n==> 선택 ");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			while (1) {
				list_size++;
				new_node = (StdInfo*)malloc(sizeof(StdInfo));
				input(&new_node);
				concat(&start, &end, new_node);
				printf("계속?(y/n) ");
				scanf("%c", &flag);
				scanf("%c", &flag);
				if (flag == 'n') break;
			}

			printf("입력완료\n\n");
			break;
		case 2:
			cur = start;
			while (cur != NULL) {
				printf("%s\t%d\t%d\n", cur->name, cur->phone_num, cur->birth);
				cur = cur->next;
			}
			break;
		case 3:
			cur = start;
			printf("이름 : ");
			scanf("%s", buf);
			cur = search(buf, &cur);
			if (cur->phone_num == -1) {
				printf("해당정보를 찾을 수 없습니다.\n\n");
			}
			else {
				printf("검색완료\n\n");
				printf("%s\t%d\t%d\n", cur->name, cur->phone_num, cur->birth);
			}
			break;
		case 4:
			cur = start;
			printf("이름 : ");
			scanf("%s", buf);
			cur = search(buf, &cur);
			if (cur->phone_num == -1) {
				printf("해당정보를 찾을 수 없습니다.\n\n");
			}
			else {
				input(&cur);
				printf("수정완료\n\n");
			}
			break;
		case 5:
			cur = start;
			printf("이름 : ");
			scanf("%s", buf);
			if (del(buf, &start, &end) == -1) {
				printf("해당정보를 찾을 수 없습니다.\n\n");
			}
			else {
				printf("삭제완료\n\n");
				list_size--;
			}
			break;
		case 6:
			list_size++;
			cur = start;
			printf("몇 번째?");
			scanf("%d", &tmp);
			for (int i = 0; i < tmp - 2; i++) cur = cur->next;

			new_node = (StdInfo*)malloc(sizeof(StdInfo));
			input(&new_node);

			new_node->next = cur->next;
			cur->next = new_node;
			break;
		case 7:
			sort(&start, &end);
			cur = start;
			while (cur != NULL) {
				printf("%s\t%d\t%d\n", cur->name, cur->phone_num, cur->birth);
				cur = cur->next;
			}
			break;
		case 8:
			return;
		default:
			break;
		}
	}
}

/*
1
AAA
1001
1208
y
BBB
1010
11030
y
CCC
1011
10103
y
DDD
1080
11108
y
EEE
1031
10520
n
2
3
BBB
4
BBB
1010
10101
5
CCC
2
6
2
ZZZ
999
9999
2
7

*/