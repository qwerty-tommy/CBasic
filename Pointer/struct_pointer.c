#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

////ex1
//#define MAX_FRIEND_SIZE 20
//int idx = 0;
//
//typedef struct _friend_Info {
//	char name[MAX_FRIEND_SIZE];
//	char phone_num[20];
//}Friend_Info;
//
//Friend_Info* enroll() {
//	Friend_Info * new_info = (Friend_Info*)malloc(sizeof(Friend_Info));
//	char buf[20];
//	
//	printf("�̸� : ");
//	scanf("%s", buf);
//	strcpy(new_info->name, buf);
//
//	printf("��ȭ��ȣ : ");
//	scanf("%s", buf);
//	strcpy(new_info->phone_num, buf);
//
//	return new_info;
//}
//
//void print(Friend_Info* friend_info) {
//	printf("%s\t%s\n", friend_info->name, friend_info->phone_num);
//}
//
//Friend_Info* search(Friend_Info* friend_table[], char target[]) {
//	for (int i = 0; i < idx; i++)
//	{
//		if (strcmp(friend_table[i]->name, target) == 0)
//		{
//			printf("�˻� ����!\n");
//			return friend_table[i];
//		}
//	}
//
//	printf("�ش����� ����!\n");
//	Friend_Info* dummy = (Friend_Info*)malloc(sizeof(Friend_Info));
//	strcpy(dummy->name, "");
//	strcpy(dummy->phone_num, "");
//	return dummy;
//}
//
//void del(Friend_Info* friend_table[], char target[]) {
//	for (int i = 0; i < idx; i++)
//	{
//		if (strcmp(friend_table[i]->name, target) == 0) {
//			printf("�˻� ����!\n");
//			for (int j = i; j < idx-1; j++)
//			{
//				friend_table[j] = friend_table[j + 1];
//			}
//			idx--;
//			return;
//		}
//	}
//
//	printf("�ش����� ����!\n");
//}
//
//void edit(Friend_Info* friend_table[], char target[]) {
//	for (int i = 0; i < idx; i++)
//	{
//		if (strcmp(friend_table[i]->name, target) == 0) {
//			char buf[20];
//			printf("�˻� ����!\n");
//			printf("�����Ϸ��� �̸� : ");
//			scanf("%s", buf);
//			strcpy(friend_table[i]->name, buf);
//
//			printf("�����Ϸ��� ��ȭ��ȣ : ");
//			scanf("%s", buf);
//			strcpy(friend_table[i]->phone_num, buf);
//
//			return;
//		}
//	}
//
//	printf("�ش����� ����!\n");
//}
//
//int main() {
//	int select;
//	Friend_Info** friend_table = (Friend_Info**)malloc(sizeof(Friend_Info*) * MAX_FRIEND_SIZE);
//	Friend_Info* tmp;
//	char buf[20];
//
//	while (1) {
//		printf("\n=== �� �� ===\n");
//		printf("1. ģ�� ��� \n");
//		printf("2. ģ������Ʈ ���\n");
//		printf("3. ģ�� ã�� \n");
//		printf("4. ģ�� ����\n");
//		printf("5. ģ������ ����\n");
//		printf("6. ����\n");
//
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			friend_table[idx++] = enroll();
//			break;
//		case 2:
//			printf("�̸�\t��ȭ��ȣ\n");
//			for (int i = 0; i < idx; i++) print(friend_table[i]);
//			break;
//		case 3:
//			printf("ã������ �̸� : ");
//			scanf("%s", buf);
//			
//			tmp=search(friend_table,buf);
//			if (strcmp(tmp->name, "") == 0) break;
//
//			printf("�̸�\t��ȭ��ȣ\n");
//			print(tmp);
//			break;
//		case 4:
//			printf("�����Ϸ��� �̸� : ");
//			scanf("%s", buf);
//			del(friend_table,buf);
//			break;
//		case 5:
//			printf("�����Ϸ��� �̸� : ");
//			scanf("%s", buf);
//			edit(friend_table, buf);
//			break;
//		case 6:
//			return 0;
//		default:
//			break;
//		}
//	}
//	
//}

////ex2
//#define MAX_STD_SIZE 20 
//typedef struct _Score_Info {
//	char std_Num[20];
//	char name[20];
//	int mid_kor;
//	int mid_eng;
//	int mid_math;
//	int fin_kor;
//	int fin_eng;
//	int fin_math;
//	int res_kor;
//	int res_eng;
//	int res_math;
//	int res;
//	int rank;
//}Score_Info;
//
//int idx;
//
//void input(Score_Info score_Table[]) {
//	printf("�й� : ");
//	scanf("%s", score_Table[idx].std_Num);
//
//	printf("�̸� : ");
//	scanf("%s", score_Table[idx].name);
//
//	printf("����(�������� ����) : ");
//	scanf("%d %d %d %d %d %d",
//		&score_Table[idx].mid_kor,
//		&score_Table[idx].mid_eng,
//		&score_Table[idx].mid_math,
//		&score_Table[idx].fin_kor,
//		&score_Table[idx].fin_eng,
//		&score_Table[idx].fin_math
//	);
//
//	score_Table[idx].res_kor = score_Table[idx].mid_kor + score_Table[idx].fin_kor;
//	score_Table[idx].res_eng = score_Table[idx].mid_eng + score_Table[idx].fin_eng;
//	score_Table[idx].res_math = score_Table[idx].mid_math + score_Table[idx].fin_math;
//	score_Table[idx].res = score_Table[idx].res_kor + score_Table[idx].res_eng + score_Table[idx].res_math;
//
//	int cnt = 0;
//	for (int i = 0; i < idx; i++)
//	{
//		if (score_Table[idx].res > score_Table[i].res) {
//			score_Table[i].rank++;
//			cnt++;
//		}
//	}
//	score_Table[idx++].rank = idx - cnt + 1;
//}
//
//void swap(Score_Info score_Table[], int a, int b) {
//	Score_Info tmp;
//	tmp = score_Table[a];
//	score_Table[a] = score_Table[b];
//	score_Table[b] = tmp;
//}
//
//void sort(Score_Info score_Table[]) {
//	for (int i = 0; i < idx; i++)
//	{
//		for (int j = 0; j < idx - i - 1; j++)
//		{
//			if (score_Table[j].res < score_Table[j + 1].res) swap(score_Table, j, j + 1);
//		}
//	}
//}
//
//
//void output(Score_Info score_Table[]) {
//	printf("�й�\t�̸�\t�߱�\t�߿�\t�߼�\t�ⱹ\t�⿵\t���\t�ֱ�\t�ֿ�\t�ּ�\t���\t���\n");
//	for (int i = 0; i < idx; i++)
//	{
//		printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
//			score_Table[i].std_Num,
//			score_Table[i].name,
//			score_Table[i].mid_kor,
//			score_Table[i].mid_eng,
//			score_Table[i].mid_math,
//			score_Table[i].fin_kor,
//			score_Table[i].fin_eng,
//			score_Table[i].fin_math,
//			score_Table[i].res_kor / 2,
//			score_Table[i].res_eng / 2,
//			score_Table[i].res_math / 2,
//			score_Table[i].res / 6,
//			score_Table[i].rank
//		);
//	}
//}
//
//int main() {
//	Score_Info score_Table[MAX_STD_SIZE];
//
//	for (int i = 0; i < 5; i++)
//	{
//		input(score_Table);
//	}
//	printf("\n\n������\n");
//	output(score_Table);
//	sort(score_Table);
//	printf("\n\n������\n");
//	output(score_Table);
//}
///*
//1 aaa 68 34 45 23 69 70
//2 bbb 88 54 42 63 49 43
//3 ccc 43 28 23 23 22 30
//4 ddd 37 45 74 19 32 12
//5 eee 89 78 98 86 78 98
//
//*/

////ex3
//typedef struct _seat {
//	char name[20];
//}Seat;
//
//typedef struct _plane {
//	Seat seats[10];
//}Plane;
//
//void reserve(Plane airport[], int pn, int sn) {
//	if (strcmp(airport[pn].seats[sn].name, "-") != 0) {
//		printf("����� �¼��Դϴ�.\n\n");
//	}
//	else {
//		printf("�̸� : ");
//		scanf("%s", airport[pn].seats[sn].name);
//	}
//}
//
//void cancel(Plane airport[], int pn, int sn) {
//	if (strcmp(airport[pn].seats[sn].name, "-") == 0) {
//		printf("������� ���� �¼��Դϴ�.\n\n");
//	}
//	else {
//		strcpy(airport[pn].seats[sn].name,"-");
//	}
//}
//
//void print(Plane airport[]) {
//	printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%dȣ��",i+1);
//		for (int j = 0; j < 10; j++)
//		{
//			printf("\t%s",airport[i].seats[j].name);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	Plane airport[5];
//	int a, b;
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			strcpy(airport[i].seats[j].name, "-");
//		}
//	}
//
//	while (1) {
//		printf("=============\n");
//		printf("1. �¼�����\n");
//		printf("2. �������\n");
//		printf("3. �¼����� ���\n");
//		printf("4. ����\n");
//		printf("=============\n");
//		printf("���� => ");
//
//		int select;
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			printf("������ ����� : ");
//			scanf("%d", &a);
//			printf("������ �¼� : ");
//			scanf("%d", &b);
//
//			reserve(airport, a-1, b - 1);
//			break;
//		case 2:
//			printf("����� ����� : ");
//			scanf("%d", &a);
//			printf("����� �¼� : ");
//			scanf("%d", &b);
//
//			cancel(airport, a - 1, b - 1);
//			break;
//		case 3:
//			print(airport);
//			break;
//		case 4:
//			printf("����..\n");
//			return;
//		default:
//			break;
//		}
//	}
//}
//
///*
//1
//1 1 brown
//1
//2 2 sam
//1
//3 3 joe
//1
//4 5 sally
//1
//3 9 john
//
//*/

//ex4
typedef struct data_List {
	int no;
	char text[300];
	char hash_code[10][20];
	int hash_count;
}Data_List;

int idx = 0;

void input(Data_List db[]) {
	char buf[300];

	printf("text : ");
	scanf("%[^\n]s", db[idx].text);
	getchar();

	printf("hash_code : ");
	scanf("%[^\n]s", buf);
	getchar();

	db[idx].hash_count=1;
	int a=0, b=0;
	for (int i = 1; i < strlen(buf); i++)
	{
		if (buf[i]=='#' )
		{
			db[idx].hash_count++;
			db[idx].hash_code[a++][b] = '\0';
			b = 0;
		}
		else 
		{
			db[idx].hash_code[a][b++] = buf[i];
		}
	}
	db[idx].hash_code[a][b] = '\0';

	db[idx].no = idx++;
}

void search(Data_List db[], char keyword[]) {
	for (int i = 0; i < idx; i++)
	{
		for (int j = 0; j < db[i].hash_count; j++)
		{
			if (strcmp(db[i].hash_code[j], keyword)) {
				printf("%s\n", db[i].text);
				break;
			}
		}
	}
}

void del(Data_List db[], int target) {
	for (int i = target; i < idx-1; i++)
	{
		db[i] = db[i + 1];
		db[i].no--;
	}
	idx--;
}

int main() {
	Data_List db[10];
	char keyword[20];
	int tmp;

	while (1) {
		printf("\n=== menu ===\n");
		printf("1. �Է�\n");
		printf("2. ��ȸ\n");
		printf("3. ����\n");
		printf("4. ����\n");
		printf("=> ");

		int select;
		scanf("%d", &select);
		getchar();
		switch (select)
		{
		case 1:
			input(db);
			break;
		case 2:
			printf("Ű���� : ");
			scanf("%[^\n]s",keyword);
			search(db,keyword);
			break;
		case 3:
			printf("��ȣ : ");
			scanf("%d", &tmp);
			del(db, tmp);
			break;
		case 4:
			return;
		default:
			break;
		}
	}
}

/*
1
�ٳ����� �³��� ���Ŀ��� ���Ǹ�, ��� �Ⱓ�� 912���� �����̴�. ����� �¾籤�� �µ��� �ʿ��ϸ�, ���а� ������� �� �������־�� �Ѵ�. Ư�� ����� ���� ��ſ��� �ϰ�, pH�� 6.07������ �����ϴ�.
#�ٳ���#�ٳ�������#�ٳ������
1
�ٳ����� ������ ���� �ε巯�� �İ��� Ư¡�� ���Ϸ�, �ַ� �������� �԰ų� �پ��� �丮�� ���ῡ ���ȴ�. �ٳ���Ĭ������ �� �߿����� ��ǥ���� �����, �ٳ����� ����, ���̽�ũ��, �÷� ���� ���� ���������.
#�ٳ���#����#�ٳ���Ĭ����
1
�ٳ����� ������ ���ε� ���� ���ȴ�. ���� �����忡���� �ٳ����� �ٸ� ���ϰ� ��� ����� ���� ��ȭ�Ӱ� �����. ���� �İ��� �ε巯�� ������ �����忡�� �� ��︰��.
#�ٳ���#������#���ϻ�����

*/