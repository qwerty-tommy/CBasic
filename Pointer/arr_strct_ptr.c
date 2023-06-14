#include <stdio.h>
#include <string.h>
#include <stdlib.h>

////다항식을 배열로 표현
//int main() {
//	int a[10][2] = { {3,8},{1,7},{0,1}, };
//	int b[10][2] = { {3,10},{2,3},{0,1}, };
//
//	int sum[10][2];
//	int idx = 0, res;
//
//	for (int i = 0; i < 10; i++) 
//	{
//		sum[idx][1] = 0;
//		for (int j = 0; j < 10; j++)
//		{
//			if (a[j][0] == i) {
//				sum[idx][0] = i;
//				sum[idx][1] += a[j][1];
//			}
//			if (b[j][0] == i) {
//				sum[idx][0] = i;
//				sum[idx][1] += b[j][1];
//			}
//		}
//		if (sum[idx][1] > 0) idx++;
//	}
//
//	for (int i = idx-1; i > 0; i--)
//	{
//		printf("%dx^%d + ", sum[i][1], sum[i][0]);
//	}
//	printf("%d", sum[0][1]);
//}


////희소행렬이 아닌 배열의 덧셈
//int main() {
//	int a[3][3] = { {2,3,0}, {8,9,0}, {7,0,5} };
//	int b[3][3] = { {1,0,0}, {1,0,0}, {1,0,0} };
//	
//	int aa[9][3];
//	int bb[9][3];
//	
//	int idx=0;
//
//	for (int i = 0; i < 9; i++)
//	{
//		if (*((*a) + i) != 0) {
//			aa[idx][0] = i % 3;
//			aa[idx][1] = i / 3;
//			aa[idx++][2] = *((*a) + i);
//		}
//	}
//
//	/*for (int i = 0; i < idx; i++)
//	{
//		printf("%d\t%d\t%d\n", aa[i][0], aa[i][1], aa[i][2]);
//	}
//
//	printf("\n\n\n");*/
//
//	idx = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		if (*((*b) + i) != 0) {
//			bb[idx][0] = i % 3;
//			bb[idx][1] = i / 3;
//			bb[idx++][2] = *((*b) + i);
//		}
//	}
//
//	/*for (int i = 0; i < idx; i++)
//	{
//		printf("%d\t%d\t%d\n", bb[i][0], bb[i][1], bb[i][2]);
//	}*/
//
//	int sum[9][3];
//	idx = 0;
//	
//	for (int i = 0; i < 9; i++)
//	{
//		sum[idx][2] = 0;
//		for (int j = 0; j < 9; j++)
//		{
//			if (aa[j][0] == i % 3 && aa[j][1] == i / 3)
//			{
//				sum[idx][0] = i % 3;
//				sum[idx][1] = i / 3;
//				sum[idx][2] += aa[j][2];
//			}
//
//			if (bb[j][0] == i % 3 && bb[j][1] == i / 3)
//			{
//				sum[idx][0] = i % 3;
//				sum[idx][1] = i / 3;
//				sum[idx][2] += bb[j][2];
//			}
//
//		}
//		if (sum[idx][2] != 0) idx++;
//	}
//
//	for (int i = 0; i < idx; i++)
//	{
//		printf("%d\t%d\t%d\n", sum[i][0], sum[i][1], sum[i][2]);
//	}
//}

////ex10
//#include<stdio.h>
//int main() {
//	int num = 123;
//	float num_f = 56.6;
//	char text_c = 'M';
//
//	void* void_p;
//	void_p = &num;
//	printf("int %d\n", *((int*)void_p));
//
//	void_p = &num_f;
//	printf("float %f\n", *((float*)void_p));
//
//	void_p = &text_c;
//	printf("char %c\n", *((char*)void_p));
//
//	return 0;
//}


////ex11
//#include<stdio.h>
//
//void arDump(void* array, int length) {
//	int i;
//	for (int i = 0; i < length; i++)
//	{
//		printf("%02X ", *((unsigned char*)array + i));
//	}
//	printf("\n");
//}
//
//void main() {
//	int ari[] = { 1,2,3,4,5 };
//	char arc[] = "Pointer";
//
//	arDump(ari, sizeof(ari));
//	arDump(arc, sizeof(arc));
//}


////ex12 - 왜 두 결과가 같은지?
//#include <stdio.h>
//void foo(int a) {
//	printf("foo : %d\n", a);
//}
//
//int main() {
//	void(*f)(int);
//	f = foo;
//	foo(10);
//	f(10);
//	(*f)(10);
//}



//============== pr start =================





////pr01
//void axis_reverse(int input[3][4], int output[4][3]) {
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			output[j][i] = input[i][j];
//		}
//	}
//}
//
//int main() {
//	int matrix[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int rev_mat[4][3];
//
//	axis_reverse(matrix, rev_mat);
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", rev_mat[i][j]);
//		}
//		printf("\n");
//	}
//}


////pr02
//#define MAX_PERSON 20
//
//typedef struct _person {
//	char* name;
//	char* phone;
//	int age;
//}PERSON, *PPERSON;
//
//int idx = 0;
//
//void enroll(PPERSON* list_p) {
//	PPERSON list = *list_p;
//	list[idx].name = (char*)malloc(sizeof(char) * 30);
//	list[idx].phone = (char*)malloc(sizeof(char) * 30);
//
//	char buf[30];
//	printf("이름 : ");
//	scanf("%s", buf);
//	strcpy(list[idx].name, buf);
//
//	printf("전화번호: ");
//	scanf("%s", buf);
//	strcpy(list[idx].phone, buf);
//
//	printf("나이 : ");
//	scanf("%d", &(list[idx++].age));
//
//	return;
//}
//
//int del(PPERSON* list_p, char * target) { 
//	PPERSON list = *list_p;
//	int i;
//
//	for (i = 0; i < idx; i++)
//	{
//		if (strcmp(list[i].name,target))
//		{
//			for (int j = i; j < idx - 1; j++)
//			{
//				list[j] = list[j + 1];
//			}
//
//			idx--;
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//void list_print(PPERSON list) {
//	printf("이름\t전화번호\t나이\n");
//	for (int i = 0; i < idx; i++)
//	{
//		printf("%s\t%s\t%d\n", list[i].name, list[i].phone, list[i].age);
//	}
//}
//
//void swap(PPERSON* list_p, int a, int b) {
//	PPERSON list = *list_p;
//	PERSON tmp;
//	tmp = list[a];
//	list[a] = list[b];
//	list[b] = tmp;
//}
//
//void sort(PPERSON* list_p) {
//	PPERSON list = *list_p;
//	for (int i = 0; i < idx; i++)
//	{
//		for (int j = 0; j < idx - i - 1; j++)
//		{
//			if (strcmp(list[j].name, list[j + 1].name)>0) swap(list_p, j, j + 1);
//		}
//	}
//}
//
//int main() {
//	int select;
//
//	PPERSON per_list = (PPERSON)malloc(sizeof(PERSON) * MAX_PERSON);
//
//	while (1) {
//		char tmp[30];
//
//		printf("1. 등록\n");
//		printf("2. 삭제\n");
//		printf("3. 리스트 출력\n");
//		printf("4. 정렬\n");
//		printf("5. 종료\n");
//		printf("===> ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			enroll(&per_list);
//			printf("등록 완료\n\n");
//			break;
//		case 2:
//			printf("삭제하려는 이름 : ");
//			scanf("%s", tmp);
//			if (del(&per_list, tmp)) {
//				printf("찾을 수 없습니다.\n\n");
//			}
//			else {
//				printf("삭제 완료\n\n");
//			}
//			break;
//		case 3:
//			list_print(per_list);
//			printf("출력 완료\n\n");
//			break;
//		case 4:
//			sort(&per_list);
//			printf("정렬 완료(이름순)\n\n");
//			list_print(per_list);
//			break;
//		case 5:
//			return 0;
//		default:
//			break;
//		}
//	}
//}
//
///*
//1
//aaa
//010
//14
//1
//ccc
//031
//15
//1
//bbb
//011
//16
//3
//4
//
//*/


////pr03
//#define MAX_SIZE 10
//
//int idx = 0;
//typedef enum {INT,DOUBLE,STRING} ENUMTYPE;
//typedef struct _sData {
//	ENUMTYPE typd;
//	void* vp;
//} DATA, *PDATA;
//
//void enroll(PDATA * parr) {
//	PDATA arr = *parr;
//	int select;
//
//	printf("자료의 종류를 입력하세요[정수:1, 실수:2, 문자열:3]\n=>");
//	scanf("%d",&select);
//	
//	switch (select)
//	{
//	case 1:
//		arr[idx].
//		break;
//	case 2:
//		break;
//	case 3:
//		break;
//	default:
//		break;
//	}
//}
//int del() {}
//void print(){}
//
//int main() {
//	int select;
//	PDATA data_arr = (PDATA)malloc(sizeof(DATA) * MAX_SIZE);
//
//	while (1) {
//		printf("1. 자료 등록 \n");
//		printf("2. 자료 삭제 \n");
//		printf("3. 자료 출력 \n");
//		printf("4. 종료 \n");
//		printf("=============\n");
//		
//		scanf("%d", &select);
//		
//		switch (select)
//		{
//		case 1:
//			enroll(&data_arr);
//			break;
//		case 2:
//			printf("삭제할 index를 입력하세요 : ");
//			scanf("%d", select);
//			del(&data_arr,select);
//			break;
//		case 3:
//			print(data_arr);
//			break;
//		case 4:
//			return 0;
//		default:
//			break;
//		}
//
//		printf("정수를 입력하세요 :");
//	}
//}

//pr04

double add(double x, double y) {
	printf("더하기\n");
	return x + y;
}

double sub(double x, double y) {
	return x - y;
}

double mul(double x, double y) {
	return x * y;
}

double div1(double x, double y) {
	return (double)(x / y);
}

double(*pf[4])(double x, double y) = { add,sub, mul,div };

int main() {
	int sel;
	int a, b;

	while (1) {
		printf("==============\n");
		printf("0. 덧셈\n");
		printf("1. 뺄셈\n");
		printf("2. 곱셈\n");
		printf("3. 나눗셈\n");
		printf("4. 종료\n");
		printf("==============\n");

		printf("메뉴를 선택하시오 : ");
		scanf("%d", &sel);

		printf("2개의 정수를 입력하시오 : ");
		scanf("%d %d", &a, &b);

		if (0 <= sel <= 3) printf("답 : %d\n\n",pf[sel](a, b));
		else if (sel == 4) return 0;

		/*switch (sel) {
		case 0:
			pf[0](a, b);
			break;
		case 1:
			pf[1](a, b);
			break;
		case 2:
			pf[2](a, b);
			break;
		case 3:
			pf[3](a, b);
			break;
		case 4:
			return 0;
		default:
			break;
		}*/
	}
}