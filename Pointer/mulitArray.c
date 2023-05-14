#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

////ex3
//int main() {
//	char* m[] = { "abc","def" };
//	puts(m[0]);
//	puts(m[1]);
//	putchar((m[1][1]));
//}

////ex4
//int main() {
//	char* m[] = { "abc","def" };
//	char** ap;
//	ap = m;
//	puts(*ap);
//	puts(ap[1]);
//	putchar(ap[1][1]);
//}

//ex5
//int main() {
//	char* m[2] = { "ab","cd" }, * n[2] = { "ef","gh" };
//	char** ap[] = { m,n };
//	puts(ap[0][0]);
//	puts(ap[0][1]);
//	puts(ap[1][0]);
//	puts(ap[1][1]);
//	putchar(ap[1][1][1]);
//}
//
////ex6
//int main() {
//	char* m[2][2] = { { "ab","cd" }, { "ef","gh" } };
//	puts(m[0][0]);
//	puts(m[0][1]);
//	puts(m[1][0]);
//	puts(m[1][1]);
//	putchar(m[1][1][1]);
//}

////ex7
//int main() {
//	char m[] = "abc";
//	char* ap = (char*)malloc(sizeof(m));
//	char* aap;
//
//	strcpy(ap, m);aap = m;puts(ap);puts(aap);
//	printf("%c", *ap++);
//
//	printf("%c", ap[0]); ap--;
//	printf("%c", *aap); free(ap);
//}

////ex8
//int main() {
//	int m;
//	int* ap;
//	int** bp;
//	int*** cp;
//
//	ap = &m;
//	bp = &ap;
//	cp = &bp;
//
//	*ap = 1;
//	**bp += 2;
//	***cp += 3;
//	printf("%d", m);
//}

////ex9- 결과가 이상함..?
//int main() {
//	char m[] = "yyyy";
//	char* ap, ** bp;
//	ap = m; bp = &ap; *ap = 'A'; ap++; **bp = 'B';
//	bp[0][3] = 'C';
//	ap[1] = 'D';
//	puts(m);
//}
//
////ex10
//void SwapIntPtr(int** dp1, int** dp2) {
//	int tmp;
//	tmp = **dp1;
//	**dp1 = **dp2;
//	**dp2 = tmp;
//}
//
//int main() {
//	int num1 = 10, num2 = 20;
//	int* ptr1, * ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(&ptr1, &ptr2);
//	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//	return 0;
//}

////ex11
//int main() {
//	int n = 20;
//	int* np = &n;
//	int** npp = &np;
//
//	printf("%d %d %d\n", n, *np, **npp);
//}
//
////ex12
//int main() {
//	char carr3[2][2][3] = { 'A','B','C','D','E','F','G' ,'H' ,'I' ,'J','K','L' };
//
//	printf("%x %x %x %x\n", carr3, carr3[0], carr3[0][0], carr3[0][0][0]);
//	printf("%x %x %x %x\n", carr3+1, carr3[0] + 1, carr3[0][0] + 1, carr3[0][0][0] + 1);
//	printf("%x %x %x %x\n", carr3 + 1, *carr3 + 1, **carr3 + 1, ***carr3 + 1);
//}
//
////ex13
//int main() {
//	char m[2][3] = { "AB","CD" };
//	char(*ap)[3];
//	ap = m;
//	puts(ap[0]);
//	puts(ap[1]);
//	putchar(ap[1][1]);
//}
//
////ex14
//int main() {
//	char m[2][2][3] = { {"ab","cd"},{"ef","gh"} };
//	char(*ap)[2][3];
//	ap = m;
//	puts(ap[0][0]);
//	puts(ap[1][0]);
//	putchar(ap[1][1][1]);
//}
//
//ex15
//int main() {
//	char m[2][3] = { "AB","CD" };
//	char n[2][3] = { "EF","GH" };
//	char(*ap[2])[3];
//	ap[0] = m; ap[1] = n;
//	puts(ap[0][0]);
//	puts(ap[0][1]);
//	puts(ap[1][0]);
//	putchar(ap[0][0][0]);
//	putchar(ap[0][0][1]);
//	putchar(ap[1][0][0]);
//	putchar(ap[1][0][1]);
//}
//
////ex16-괄호가 필요한 이유, 포인터랑 배열중에 연산 먼저
//int main() {
//	char carr[4] = { 'A','B','C','D' };
//	char(*ap)[2] = (char(*)[2]) carr;
//	
//	printf("%c %c %c %c\n", carr[0], carr[1], carr[2], carr[3]);
//	printf("%c %c %c %c\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
//}
//
////ex17
//int main() {
//	int iarr[4] = { 1,2,3,4 };
//	int(*ap)[2] = (int(*)[2]) iarr;
//
//	printf("%d %d %d %d\n", iarr[0], iarr[1], iarr[2], iarr[3]);
//	printf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
//}

////ex18
//int main() {
//	char carr2[2][2] = { 'a','b','c','d' };
//	char(*ap)[2] = (char(*)[2]) carr2;
//
//	printf("%c %c %c %c\n", carr2[0][0], carr2[0][1], carr2[1][0], carr2[1][1]);
//	printf("%c %c %c %c\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
//}
//
////ex19
//int main() {
//	int iarr2[2][2] = { 1,2,3,4 };
//	int(*ap)[2] = iarr2;
//
//	prinf("%d %d %d %d\n", iarr2[0][0], iarr2[0][1], iarr2[1][0], iarr2[1][1]);
//	prinf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
//}
//
////ex20
//int main() {
//	char carr[12]={ 'A','B','C','D','E','F','G' ,'H' ,'I' ,'J','K','L' };
//	char(*ap1)[4] = (char(*)[4])carr;
//	char(*ap2)[3] = (char(*)[3])carr;
//	char(*ap3)[2][3] = (char(*)[2][3])carr;
//	
//	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",
//		ap1[0][0], ap1[0][1], ap1[0][2], ap1[0][3],
//		ap1[1][0], ap1[1][1], ap1[1][2], ap1[1][3],
//		ap1[2][0], ap1[2][1], ap1[2][2], ap1[2][3]);
//	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",
//		ap2[0][0], ap2[0][1], ap2[0][2],
//		ap2[1][0], ap2[1][1], ap2[1][2],
//		ap2[2][0], ap2[2][1], ap2[2][2],
//		ap2[3][0], ap2[3][1], ap2[3][2]);
//	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",
//		ap3[0][0][0], ap3[0][0][1], ap3[0][0][2], 
//		ap3[0][1][0], ap3[0][1][1], ap3[0][1][2], 
//		ap3[1][0][0], ap3[1][0][1], ap3[1][0][2], 
//		ap3[1][1][0], ap3[1][1][1], ap3[1][1][2]);
//}
////
////ex21
//int main() {
//	char carr[12]= { 'A','B','C','D','E','F','G' ,'H' ,'I' ,'J','K','L' };
//	char(*ap1)[4] = (char(*)[4])carr;
//	char(*ap2)[3] = (char(*)[3])carr;
//	char(*ap3)[2][3] = (char(*)[2][3])carr;
//
//	printf("%d %d %d %d\n", sizeof(carr), sizeof(ap1), sizeof(ap2), sizeof(ap3));
//	printf("%c %c %c\n", **(ap1 + 1), **(ap2 + 1), ***(ap3 + 1));
//}
//
////ex22
//int main() {
//	char carr2[2][2] = { 'a','b','c','d' };
//	char* ap = (char*)carr2;
//
//	printf("%c %c %c %c\n", ap[0], ap[1], ap[2], ap[3]);
//}
//
////ex23
//int main() {
//	int iarr2[2][2] = { 10,20,30,40 };
//	int* ap = (int*)iarr2;
//	
//	printf("%d %d %d %d\n", iarr2[0][0], iarr2[0][1], iarr2[1][0], iarr2[1][1]);
//	printf("%d %d %d %d\n", ap[0], ap[1], ap[2], ap[3]);
//}
//
//ex24
//int main() {
//	char c = 'A';
//	char(*ap1)[2] = (char(*)[2]) & c;
//	char(*ap2)[4] = (char(*)[4]) & c;
//	char(*ap3)[3][3] = (char(*)[3][3]) & c;
//
//	printf("%c %c %c\n", **ap1, **ap2, ***ap3);
//	printf("%c %c %c\n", ap1[0][0], ap2[0][0], ap3[0][0][0]);
//
//	printf("%x %x %x %x\n", ap1, ap1 + 1, ap1[0], ap1[1]);
//	printf("%x %x %x %x\n", ap2, ap2 + 1, ap2[0], ap2[1]);
//	printf("%x %x %x %x\n", ap3, ap3 + 1, ap3[0], ap3[1]);
//
//	printf("%x %x %x %x\n", ap3[0], ap3[0] + 1, ap3[0][0], ap3[0][1]);
//}
//
////ex25
//void kk(char ap[]) {
//	putchar(ap[0]);
//	putchar(ap[1]);
//}
//
//int main() {
//	char m[] = "ABC";
//	kk(m);
//}
//
////ex26
//void kk(char ap[][3]) {
//	putchar(ap[0]);
//	putchar(ap[1]);
//}
//
//int main() {
//	char m[2][3] = { "AB","CD" };
//	kk(m);
//}
//
////ex27
//void kk(char ap[][2][3]) {
//	putchar(ap[0][0]);
//	putchar(ap[1][1]);
//}
//
//int main() {
//	char m[2][2][3] = { {"AB","CD"},{"EF","GH"} };
//	kk(m);
//}

////pr1
//int main() {
//	int arr[5] = { 10,20,30,40,50 };
//	int* ap = arr;
//
//	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//	printf("%d %d %d %d %d\n", ap[0], ap[1], ap[2], ap[3], ap[4]);
//}

////pr2
//int main() {
//	int arr[2][2] = { {10,20},{100,200} };
//	int(*ap)[2] = (int(*)[2])arr;
//
//	printf("%d %d %d %d\n", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
//	printf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
//}

////pr3
//int main() {
//	int arr[6] = { 10,20,100,200,1000,2000 };
//	int(*ap)[2] = (int(*)[2])arr;
//
//	printf("%d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
//	printf("%d %d %d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1], ap[2][0], ap[2][1]);
//}

////pr4
//void input_string(char(*sp)[20]) {
//	for (int i = 0; i < 5; i++) scanf("%s", sp[i]);
//}
//
//void output_string(char(*sp)[20]) {
//	for (int i = 0; i < 5; i++) printf("%s\n", sp[i]);
//}
//
//int main() {
//	char str[5][20];
//	input_string(str);
//	output_string(str);
//}

////pr5
//void Swap(char* str1, char* str2) {
//	char tmp[100];
//	/*strcpy(tmp, str1);
//	strcpy(str1, str2);
//	strcpy(str2, tmp);*/
//	&str1 = &str2;
//}
//
//int main() {
//	char s1[100];
//	char s2[100];
//
//	printf("첫 번째 문자열을 입력하세요 : ");
//	scanf("%s", s1);
//	printf("두 번째 문자열을 입력하세요 : ");
//	scanf("%s", s2);
//
//	printf("첫 번째 문자열  : %s\n", s1);
//	printf("두 번째 문자열  : %s\n", s2);
//
//	Swap(s1, s2);
//
//	printf("첫 번째 문자열  : %s\n", s1);
//	printf("두 번째 문자열  : %s\n", s2);
//}

////pr6-바꿀것
//void getFruit(char** fruitTable,int size) {
//	for (int i = 0; i < size; i++) {
//		*(fruitTable + i) = (char*)malloc(100 * sizeof(char*));
//		printf("%d번째 과일명을 입력하시오 : ");
//		scanf("%s", *(fruitTable + i));
//	}
//}
//
//int main() {
//	int size;
//
//	printf("당신이 알고 있는 과일의 가지 수는? ");
//	scanf("%d", &size);
//
//	char** fruitTable = (char**)malloc(size * sizeof(char*));
//	
//	getFruit(fruitTable,size);
//
//	printf("당신이 알고 있는 과일의 종류는 ");
//	for (int i = 0; i < size; i++) {
//		printf("%s ", *(fruitTable + i));
//	}
//	printf("이었군요!");
// 
//	free(fruitTable);
//  return 0;
//}

////pr7,8-바꿀것
//#define MAX_LIFE 3;
//int main() {
//	int size;
//	int life = MAX_LIFE;
//
//	printf("몇 개의 단어를 입력하여 저장할까요? : ");
//	scanf("%d", &size);
//
//	char** dict = (char*)malloc(2 * size * sizeof(char*));
//
//	for (int i = 0; i < size; i++)
//	{
//		*(dict + 2 * i) = (char*)malloc(100 * sizeof(char));
//		*(dict + 2 * i + 1) = (char*)malloc(100 * sizeof(char));
//		printf("%d번째 단어 : ", i + 1);
//		scanf("%s %s", *(dict + 2 * i), *(dict + 2 * i + 1));
//	}
//	printf("== 저장이 끝났습니다.\n");
//	
//	char buf[100];
//
//	for (int i = 0; i < size;)
//	{
//		printf("%d번째 단어 : %s ", i, *(dict + 2 * i));
//		scanf("%s", buf);
//		if (!strcmp(buf, *(dict + 2 * i + 1))) {
//			printf("정답!\n");
//			i++;
//		}
//		else {
//			if (life-- == 0) {
//				printf("기회를 모두 소진하였습니다.\n");
//				return 0;
//			}
//			printf("틀렸습니다ㅠㅠ %d번의 기회가 있습니다", life);
//		}
//	}
//
//	printf("%d개의 정답을 맞추었습니다~~", size);
//}


//pr9
#include<time.h>
#define MASK_RATIO 0.6
int main() {
	int size;
	char buf[100];

	printf("몇 개의 단어를 입력하여 저장할까요? : ");
	scanf("%d", &size);

	char** dict = (char**)malloc(size * sizeof(char*));

	for (int i = 0; i < size; i++)
	{
		printf("%d번째 단어 : ", i + 1);
		scanf("%s", buf);
		*(dict + i) = (char*)malloc((strlen(buf) + 1));
		strcpy(*(dict + i), buf);
	}
	printf("== 저장이 끝났습니다. ==\n");

	printf("\n저장된 데이터\n");
	for (int i = 0; i < size; i++) printf("%s\n", *(dict + i));
	printf("\n");

	char ans[100];
	char prob[100];

	srand(time(NULL));

	strcpy(ans, *(dict + rand() % size));
	strcpy(prob, ans);

	printf("ans : %s\n", ans);

	int mask_size = (int)(strlen(ans) * MASK_RATIO);

	printf("MASK_RATIO : %f\n", MASK_RATIO);
	printf("mask_size : %d\n", mask_size);

	for (int i = 0; i < mask_size; )
	{
		int tmp = rand() % strlen(ans);
		if (prob[tmp] == '*') {
			continue;
		}
		else {
			prob[tmp] = '*';
			i++;
		}
	}

	printf("prob : %s\n", prob);

	printf("\n== 게임 시작! ==\n");
	
	char input;
	
	while (strcmp(prob, ans) != 0) {
		printf("문제 => %s\n", prob);
		printf("글자 하나 입력 : ");
		scanf(" %c", &input);

		int i;
		for (i = 0; i < strlen(ans); i++)
		{
			if (prob[i] == '*' && ans[i] == input) {
				printf("%c 정답!\n", input);
				prob[i] = ans[i];
				break;
			}
		}

		if(i==strlen(ans)) printf("%c 오답!\n", input);
	}

	printf("== 게임 종료 ==");
}

////pr10
//void getData(char**dict,int size) {
//	for (int i = 0; i < size; i++)
//	{
//		*(dict + i) = (char*)malloc(100 * sizeof(char));
//		printf("%d번째 단어 : ", i + 1);
//		scanf("%s", *(dict + i));
//	}
//	printf("== 저장이 끝났습니다.\n");
//}
//
//int main() {
//	int size;
//
//	printf("몇 개의 단어를 입력하여 저장할까요? : ");
//	scanf("%d", &size);
//
//	char** dict = (char*)malloc(size * sizeof(char*));
//
//	getData(dict, size);
//
//	int target;
//	printf("몇 번째 색을 가져올까요? : ");
//	scanf("%d", &target);
//
//	printf("=> %d번째 기억되어 있는 색은 %s입니다.", target, *(dict + target-1));
//}

////pr11
//void input(char** dict, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		*(dict + i) = (char*)malloc(100 * sizeof(char));
//		printf("%d번째 단어 : ", i + 1);
//		scanf("%s", *(dict + i));
//	}
//	printf("== 저장이 끝났습니다.\n");
//}
//
//int main() {
//	int size;
//
//	printf("몇 개의 단어를 입력하여 저장할까요? : ");
//	scanf("%d", &size);
//
//	char** dict = (char*)malloc(size * sizeof(char*));
//
//	input(dict, size);
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%s\n", *(dict+i));
//	}
//}

////pr12
//void set_max_ptr(int** pmax) {
//	int max = 0;
//	int maxi = -1;
//
//	for (int i = 0; i < 6; i++)
//	{	
//		if (max < *(*pmax + i)) {
//			max = *(*pmax + i);
//			maxi = i;
//		}
//	}
//
//	*pmax = (*pmax + maxi);
//}
//
//int main() {
//	int m[6] = { 5,7,1,3,6,9 };
//	int* pmax = m;
//	set_max_ptr(&pmax);
//
//	printf("%d", *pmax);
//	return 0;
//}


////pr14
//void getData(char**dict,int size) {
//	for (int i = 0; i < size; i++)
//	{
//		*(dict + i) = (char*)malloc(100 * sizeof(char));
//		printf("%d번째 단어 : ", i + 1);
//		scanf("%s", *(dict + i));
//	}
//	printf("== 저장이 끝났습니다.\n");
//}
//
//int array_equal(char** dict, char** input,int size) {
//	int len;
//	for (int i = 0; i < size; i++)
//	{
//		if (strcmp(*dict, *input) != 0) return -1;
//	}
//	return 0;
//}
//
//int main() {
//	int size;
//
//	printf("몇 개의 단어를 입력하여 저장할까요? : ");
//	scanf("%d", &size);
//
//	char** dict = (char*)malloc(size * sizeof(char*));
//	getData(dict, size);
//
//	char** input = (char*)malloc(size * sizeof(char*));
//	getData(input, size,size);
//
//	if (array_equal(dict, input,size)) {
//		printf("배열1과 배열2는 다릅니다.");
//	}
//	else {
//		printf("배열1과 배열2는 같습니다.");
//	}
//}

////pr15
//void getData(char**dict,int size) {
//	for (int i = 0; i < size; i++)
//	{
//		*(dict + i) = (char*)malloc(100 * sizeof(char));
//		printf("%d번째 단어 : ", i + 1);
//		scanf("%s", *(dict + i));
//	}
//	printf("== 저장이 끝났습니다.\n");
//}
//
//void array_copy(char** dict, char** dest,int size) {
//	for (int i = 0; i < size; i++) {
//		*(dest + i) = (char*)malloc(100 * sizeof(char));
//		strcpy(*(dest + i), *(dict + i));
//	}
//}
//
//int main() {
//	int size;
//
//	printf("몇 개의 단어를 입력하여 저장할까요? : ");
//	scanf("%d", &size);
//
//	char** dict = (char*)malloc(size * sizeof(char*));
//	getData(dict, size);
//
//	char** dest = (char*)malloc(size * sizeof(char*));
//
//	array_copy(dict, dest, size);
//	
//	for (int i = 0; i < size; i++)
//	{
//		printf("%s\n", *(dest+i));
//	}
//}

////pr17
//int main() {
//	int data[][2] = { {10,20},{30,40}, {50,60}, {70,80}, {90,100} };
//	int(*ptr)[2] = (char(*)[2])data;
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*(ptr + i))[0]);
//	}
//	
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*(ptr + i))[1]);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d %d ", (*(ptr + i))[0], (*(ptr + i))[1]);
//	}
//}

////pr18
//#include <string.h>
//
//int MySearch(char* str, char* target) {
//	int cnt = 0;
//	char* ptr = strstr(str, target);
//
//	while (ptr != NULL) {
//		cnt++;
//		ptr=strstr(ptr + strlen(target), target);
//	}
//
//	printf("%s=%d개 존재\n", target, cnt);
//
//}
//
//int main() {
//	char m[]="you love you yoolove love me ...you";
//	char target[100];
//
//	while (1) {
//		printf("찾을 단어 : ");
//		scanf("%s", target);
//
//		MySearch(m, target);
//	}
//}