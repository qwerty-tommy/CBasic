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
//	printf("이름 : ");
//	scanf("%s", buf);
//	strcpy(new_info->name, buf);
//
//	printf("전화번호 : ");
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
//			printf("검색 성공!\n");
//			return friend_table[i];
//		}
//	}
//
//	printf("해당정보 없음!\n");
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
//			printf("검색 성공!\n");
//			for (int j = i; j < idx-1; j++)
//			{
//				friend_table[j] = friend_table[j + 1];
//			}
//			idx--;
//			return;
//		}
//	}
//
//	printf("해당정보 없음!\n");
//}
//
//void edit(Friend_Info* friend_table[], char target[]) {
//	for (int i = 0; i < idx; i++)
//	{
//		if (strcmp(friend_table[i]->name, target) == 0) {
//			char buf[20];
//			printf("검색 성공!\n");
//			printf("변경하려는 이름 : ");
//			scanf("%s", buf);
//			strcpy(friend_table[i]->name, buf);
//
//			printf("변경하려는 전화번호 : ");
//			scanf("%s", buf);
//			strcpy(friend_table[i]->phone_num, buf);
//
//			return;
//		}
//	}
//
//	printf("해당정보 없음!\n");
//}
//
//int main() {
//	int select;
//	Friend_Info** friend_table = (Friend_Info**)malloc(sizeof(Friend_Info*) * MAX_FRIEND_SIZE);
//	Friend_Info* tmp;
//	char buf[20];
//
//	while (1) {
//		printf("\n=== 메 뉴 ===\n");
//		printf("1. 친구 등록 \n");
//		printf("2. 친구리스트 출력\n");
//		printf("3. 친구 찾기 \n");
//		printf("4. 친구 삭제\n");
//		printf("5. 친구정보 변경\n");
//		printf("6. 종료\n");
//
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			friend_table[idx++] = enroll();
//			break;
//		case 2:
//			printf("이름\t전화번호\n");
//			for (int i = 0; i < idx; i++) print(friend_table[i]);
//			break;
//		case 3:
//			printf("찾으려는 이름 : ");
//			scanf("%s", buf);
//			
//			tmp=search(friend_table,buf);
//			if (strcmp(tmp->name, "") == 0) break;
//
//			printf("이름\t전화번호\n");
//			print(tmp);
//			break;
//		case 4:
//			printf("삭제하려는 이름 : ");
//			scanf("%s", buf);
//			del(friend_table,buf);
//			break;
//		case 5:
//			printf("변경하려는 이름 : ");
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
//	printf("학번 : ");
//	scanf("%s", score_Table[idx].std_Num);
//
//	printf("이름 : ");
//	scanf("%s", score_Table[idx].name);
//
//	printf("성적(공백으로 구분) : ");
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
//	printf("학번\t이름\t중국\t중영\t중수\t기국\t기영\t기수\t최국\t최영\t최수\t평균\t등수\n");
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
//	printf("\n\n정렬전\n");
//	output(score_Table);
//	sort(score_Table);
//	printf("\n\n정렬후\n");
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
//		printf("예약된 좌석입니다.\n\n");
//	}
//	else {
//		printf("이름 : ");
//		scanf("%s", airport[pn].seats[sn].name);
//	}
//}
//
//void cancel(Plane airport[], int pn, int sn) {
//	if (strcmp(airport[pn].seats[sn].name, "-") == 0) {
//		printf("예약되지 않은 좌석입니다.\n\n");
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
//		printf("%d호기",i+1);
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
//		printf("1. 좌석예약\n");
//		printf("2. 예약취소\n");
//		printf("3. 좌석상태 출력\n");
//		printf("4. 종료\n");
//		printf("=============\n");
//		printf("선택 => ");
//
//		int select;
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			printf("예약할 비행기 : ");
//			scanf("%d", &a);
//			printf("예약할 좌석 : ");
//			scanf("%d", &b);
//
//			reserve(airport, a-1, b - 1);
//			break;
//		case 2:
//			printf("취소할 비행기 : ");
//			scanf("%d", &a);
//			printf("취소할 좌석 : ");
//			scanf("%d", &b);
//
//			cancel(airport, a - 1, b - 1);
//			break;
//		case 3:
//			print(airport);
//			break;
//		case 4:
//			printf("종료..\n");
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
		printf("1. 입력\n");
		printf("2. 조회\n");
		printf("3. 삭제\n");
		printf("4. 종료\n");
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
			printf("키워드 : ");
			scanf("%[^\n]s",keyword);
			search(db,keyword);
			break;
		case 3:
			printf("번호 : ");
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
바나나는 온난한 기후에서 재배되며, 재배 기간은 912개월 정도이다. 충분한 태양광과 온도가 필요하며, 수분과 영양분을 잘 공급해주어야 한다. 특히 토양은 흙이 헐거워야 하고, pH는 6.07정도가 적당하다.
#바나나#바나나나무#바나나재배
1
바나나는 달콤한 맛과 부드러운 식감이 특징인 과일로, 주로 간식으로 먹거나 다양한 요리나 음료에 사용된다. 바나나칵테일은 그 중에서도 대표적인 음료로, 바나나와 우유, 아이스크림, 시럽 등을 섞어 만들어진다.
#바나나#과일#바나나칵테일
1
바나나는 샐러드 재료로도 많이 사용된다. 과일 샐러드에서는 바나나를 다른 과일과 섞어서 색상과 맛을 조화롭게 만든다. 또한 식감이 부드러워 가벼운 샐러드에도 잘 어울린다.
#바나나#샐러드#과일샐러드

*/