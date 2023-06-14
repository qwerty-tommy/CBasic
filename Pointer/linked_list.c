#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6011)
#pragma warning(disable : 6031)
#pragma warning(disable : 6054)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct _snode {
	struct _snode* prev;
	struct _snode* next;
	char id[30];
	char name[30];
	int kor;
	int eng;
	int math;
}NODE,*PNODE;

void init(PNODE* start, PNODE* end) {
	(*start) = NULL;
	(*end) = NULL;
}

int get_length(PNODE start) {
	PNODE cur = start;
	int cnt = 0;

	while (cur != NULL)
	{
		cur = cur->next;
		cnt++;
	}

	return cnt;
}

void clear(PNODE* start, PNODE* end) {
	*start = NULL;
	*end = NULL;
}

int add_first(PNODE* start, PNODE* end) {
	PNODE new = (PNODE)malloc(sizeof(NODE));

	new->prev = NULL;
	new->next = NULL;
	printf("id : ");
	scanf("%s", new->id);
	printf("name : ");
	scanf("%s", new->name);
	printf("kor-score : ");
	scanf("%d", &new->kor);
	printf("eng-score : ");
	scanf("%d", &new->eng);
	printf("math-score : ");
	scanf("%d", &new->math);

	if ((*start) == NULL)
	{
		*start = new;
		*end = *start;
	}
	else if (*start == *end)
	{
		(*start)->next = new;
		new->next = (*start);
		(*end) = new;
	}
	else
	{
		(*start)->prev = new;
		new->next = (*start);
		(*start) = new;
	}

	return 0;
}

int add_last(PNODE* start, PNODE* end) {
	PNODE new = (PNODE)malloc(sizeof(NODE));

	new->prev = NULL;
	new->next = NULL;
	printf("id : ");
	scanf("%s", new->id);
	printf("name : ");
	scanf("%s", new->name);
	printf("kor-score : ");
	scanf("%d", &new->kor);
	printf("eng-score : ");
	scanf("%d", &new->eng);
	printf("math-score : ");
	scanf("%d", &new->math);

	if ((*start) == NULL)
	{
		*start = new;
		*end = *start;
	}
	else if (*start == *end)
	{
		(*start)->next = new;
		new->next = (*start);
		(*end) = new;
	}
	else
	{
		(*end)->next = new;
		new->prev = (*end);
		(*end) = new;
	}

	return 0;
}

int insert_node(PNODE* start,PNODE* end) {
	int size = get_length((*start));
	int target;
	
	printf("index : ");
	scanf("%d", &target);

	if (size < target) return -1;

	PNODE new = (PNODE)malloc(sizeof(NODE));

	if (target == 0) return add_first(start, end);
	if (size == target) return add_last(start, end);

	new->prev = NULL;
	new->next = NULL;
	printf("id : ");
	scanf("%s", new->id);
	printf("name : ");
	scanf("%s", new->name);
	printf("kor-score : ");
	scanf("%d", &new->kor);
	printf("eng-score : ");
	scanf("%d", &new->eng);
	printf("math-score : ");
	scanf("%d", &new->math);
		
	PNODE cur = (*start);

	for (int i = 0; i < target; i++) cur = cur->next;

	cur->prev->next = new;
	new->prev = cur->prev;
	cur->prev = new;
	new->next = cur;

	return 0;
}

int delete_first(PNODE* start, PNODE* end) {
	if (*start == NULL) return -1;
	if (*start == *end)
	{
		clear(start, end);
		return 0;
	}
	*start = (*start)->next;
	free((*start)->prev);
	(*start)->prev = NULL;
	return 0;
}

int delete_last(PNODE* start, PNODE* end) {
	if (*start == NULL) return -1;
	if (*start == *end)
	{
		clear(start, end);
		return 0;
	}
	*end = (*end)->prev;
	free((*end)->next);
	(*end)->next = NULL;
	return 0;
}

int remove_node(PNODE* start, PNODE* end) {
	char buf[30];
	printf("Name : ");
	scanf("%s", buf);

	if (*start == *end) {
		if (strcmp((*start)->name, buf) == 0) {
			clear(start, end);
			return 0;
		}
		else
			return -1;
	}
	
	if (strcmp((*start)->name, buf) == 0) {
		return delete_first(start, end);
	}

	if (strcmp((*end)->name, buf) == 0) {
		return delete_last(start, end);
	}

	PNODE cur = (*start);
	while (cur != NULL) {
		if (strcmp(cur->name, buf) == 0) {
			cur->prev->next = cur->next;
			cur->next->prev = cur->prev;
			free(cur);
			return 0;
		}
		cur = cur->next;
	}
	return -1;
}

//void delete_entry(PNODE* start, PNODE* end) {}

PNODE get_entry(PNODE start) {
	PNODE cur = start;
	char buf[30];

	printf("Name : ");
	scanf("%s", buf);

	while (cur != NULL)
	{
		if (strcmp(cur->name,buf)==0)
		{
			return cur;
		}

		cur = cur->next;
	}

	cur = (PNODE)malloc(sizeof(NODE));
	cur->kor = -1;
	return cur;
}

void print_node(PNODE cur) {
	printf("%s\t%s\t%d\t%d\t%d\n",
		cur->id,
		cur->name,
		cur->eng,
		cur->kor,
		cur->math
	);
}

void display(PNODE start) {
	PNODE cur;

	if (start==NULL)
	{
		printf("Empty list..\n\n");
	}
	else
	{
		cur = start;

		printf("ID\tName\tkor\teng\tmath\n");
		while (cur != NULL)
		{
			print_node(cur);
			cur = cur->next;
		}
		printf("\n");
	}
}

void menu() {
	printf("====================\n");
	printf("1. insert_node()\n");
	printf("2. remove_node()\n");
	printf("3. get_length()\n");
	printf("4. add_last()\n");
	printf("5. add_first()\n");
	//printf("6. delete_entry()\n");
	printf("7. get_entry()\n");
	printf("8. clear()\n");
	printf("9. display()\n");
	printf("0. Á¾·á\n");
	printf("====================\n");
}


int main() {
	int sel;
	PNODE start, end, cur;
	init(&start,&end);

	while (1) {
		menu();
		scanf("%d", &sel);

		switch (sel)
		{
		case 1:
			if (insert_node(&start, &end) == -1) printf("Unvalid index..\n\n");
			else printf("Insert ok.\n\n");
			break;
		case 2:
			if (remove_node(&start, &end) == -1) printf("Search err..\n\n");
			else printf("delete ok.\n\n");
			break;
		case 3:
			printf("list-size : %d\n\n",get_length(start));
			break;
		case 4:
			if (add_last(&start, &end) == -1) printf("Unvalid index..\n\n");
			else printf("add-last ok.\n\n");
			break;
		case 5:
			if (add_first(&start, &end) == -1) printf("Unvalid index..\n\n");
			else printf("add-first ok.\n\n");
			break;
		//case 6:
		//	delete_entry(&start, &end);
		//	break;
		case 7:
			cur=get_entry(start);
			if (cur->kor == -1) printf("Search err..\n");
			else {
				printf("ID\tName\tkor\teng\tmath\n");
				print_node(cur);
			}
			printf("\n");
			break;
		case 8:
			clear(&start, &end);
			printf("Clear ok.\n\n");
			break;
		case 9:
			display(start);
			break;
		case 0:
			return;
		default:
			break;
		}
	}
	
}

/*
4
11111
aaa
30
70
20
4
22222
bbb
80
20
20
4
33333
ccc
99
99
100
9
5
44444
ddd
1
1
1
9
7
bbb
8
9
3
1
0
11111
aaa
30
70
20
1
0
22222
bbb
80
20
20
1
3
33333
ccc
99
99
100
1
0
44444
ddd
1
1
1
9
*/