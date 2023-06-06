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


//pr02
#define MAX_PERSON 20

typedef struct _person {
	char* name;
	char* phone;
	int age;
}PERSON, *PPERSON;

int idx = 0;

void enroll(PPERSON* list) {
	printf("이름 : ");
	scanf("%s", list[idx]->name);
	printf("전화번호: ");
	scanf("%s", list[idx]->phone);
	printf("나이 : ");
	scanf("%d", &(list[idx]->age));

	return;
}

void del() {}
void list_print() {}
void sort() {}

int main() {
	int select;

	PPERSON* per_list = (PPERSON*)malloc(sizeof(PPERSON)*MAX_PERSON);

	while (1) {
		printf("1. 등록\n");
		printf("2. 삭제\n");
		printf("3. 리스트 출력\n");
		printf("4. 정렬\n");
		printf("5. 종료\n");
		printf("===> ");
		scanf("%d", &select);

		switch (select)
		{
		case 1:
			per_list[idx] = (PPERSON)malloc(sizeof(PERSON));
			enroll(per_list);
		case 2:
			del();
		case 3:
			list_print();
		case 4:
			sort();
		case 5:
			return 0;

		default:
			break;
		}
	}
}