#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<malloc.h>

////ex3
//int main() {
//	char* ap;
//	ap = (char*)malloc(4);
//	strcpy(ap, "ABC");
//	printf("%u\n", ap);
//	puts(ap);
//	free(ap);
//
//	ap = (char*)malloc(4);
//	strcpy(ap, "DEF");
//	printf("%u\n", ap);
//	puts(ap);
//	free(ap);
//}

////ex4
//char* ReadUserName(void) {
//	char* name = (char*)malloc(sizeof(char) * 20);
//	printf("What's your name? ");
//	gets(name);
//	return name;
//}
//
//int main() {
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1: %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2: %s \n", name2);
//	return 0;
//}

////ex5
//int main() {
//	char* pmem;
//	pmem = (char*)malloc(6);
//
//	printf("%d", sizeof(pmem));
//	printf("%d", _msize(pmem));
//	strcpy(pmem, "apple");
//	puts(pmem);
//
//	pmem = (char*)realloc(pmem, 20);
//	strcat(pmem, "banana");
//	puts(pmem);
//	/*if (pmem == NULL) puts("메모리를 할당할 수 없습니다."); 
//	else {
//		printf("할당된 메모리 길이는 %d바이트입니다. \n", _msize(pmem));
//		pmem = (char*)realloc(pmem, 200);
//
//		if (pmem == NULL) puts("메모리를 재할당할 수 없습니다.");
//		else printf("재할당된 메모리 길이는 %d바이트 입니다. \n", _msize(pmem));
//		printf("%c", pmem[0]);
//	}*/
//
//	free(pmem);
//}


//===================================

////ex1
//
//int main() {
//	int size;
//	printf("몇 개의 수를 입력할까요 : ");
//	scanf("%d", &size);
//
//	int* nums = (int*)malloc(sizeof(int) * size);
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d번째 값 : ",i+1);
//		scanf("%d", nums + i);
//	}
//
//	printf("=>입력한 값은 ");
//	for (int i = 0; i < size; i++) printf("%d ", *(nums + i));
//}

////ex2
//#include <time.h>
//int main() {
//	srand(time(NULL));
//
//	int size;
//	printf("몇 개의 난수를 발생할까요? : ");
//	scanf("%d", &size);
//	int* nums = (int*)malloc(sizeof(int) * size);
//
//	int sum=0;
//	printf("=>");
//	for (int i = 0; i < size; i++)
//	{
//		*(nums + i) = rand() % 100 + 1;
//		printf(" %d", *(nums + i));
//		sum += *(nums + i);
//	}
//	printf("\n합=%d", sum);
//
//	return 0;
//}

////ex3
//int main() {
//	int size;
//	printf("몇 개의 수를 입력하시겠습니까? ");
//	scanf("%d", &size);
//
//	int* nums = (int*)malloc(sizeof(int) * size);
//	
//	int sum=0, avg=0, min=INT_MAX, max=0;
//	for (int i = 0; i < size; i++)
//	{
//		printf("정수를 입력하세요 : ");
//		scanf("%d", nums + i);
//
//		sum += *(nums + i);
//		if (min > *(nums + i)) min = *(nums + i);
//		if (max < *(nums + i)) max = *(nums + i);
//	}
//	avg = sum / size;
//
//	printf("합=%d\n평균=%d\n최대값=%d\n최소값=%d\n", sum, avg, max, min);
//}
//	
////ex4
//int main() {
//	char* str = (char*)malloc(sizeof(char)*2);
//	int idx = 0;
//
//	char tmp;
//	printf("문자를 입력하세요 : ");
//	scanf("%c", &tmp);
//
//	while (tmp!='\n')
//	{
//		str[idx] = tmp;
//		(char*)realloc(str, sizeof(char)*(idx+3));
//		idx++;
//		scanf("%c", &tmp);
//		scanf("%c", &tmp);
//	}
//
//	*(str + idx) = '\0';
//
//	printf("%c", str[0]);
//	for (int i = 1; i < idx; i++)
//	{
//		printf("->%c", *(str + i));
//	}
//}


////ex4
//int main() {
//	char* str = (char*)malloc(sizeof(char));
//	str[0] = '\0';
//
//	char tmp;
//	printf("문자를 입력하세요 : ");
//	scanf("%c", &tmp);
//	int len;
//	
//	while (tmp!='\n')
//	{
//		len=strlen(str);
//		(char*)realloc(str, sizeof(char) * (len + 1));
//		*(str + len) = tmp;
//		*(str + len +1) = '\0';
//		scanf("%c", &tmp);
//	}
//
//	puts(str);
//}
//ex5
//int main() {
//	char* str = (char*)malloc(sizeof(char) * 2);
//	int idx = 0;
//
//	char tmp;
//	printf("문자를 입력하세요 : ");
//	scanf("%c", &tmp);
//
//	while (tmp != '\n')
//	{
//		str[idx] = tmp;
//		(char*)realloc(str, sizeof(char) * (idx + 3));
//		idx++;
//		scanf("%c", &tmp);
//		scanf("%c", &tmp);
//	}
//
//	*(str + idx) = '\0';
//
//	
//	for (int i = idx-1; i > 0; i--)
//	{
//		printf("%c->", *(str + i));
//	}
//	printf("%c", str[0]);
//}

//ex6
int main() {
	char** table=(char**)malloc(sizeof(char*)*5);
	char name[100];
	for (int i = 0; i < 5; i++)
	{
		printf("과일이름 : ");
		scanf("%s", &name);
		table[i] = (char*)malloc(strlen(name) + 1);
		strcpy(table[i],name);
	}

	printf("=>입력한 이름은 ");
	for (int i = 0; i < 5; i++) printf("%s ",table[i]);
	printf("입니다.");
}

////char* fruit=(char*)malloc(sizeof(char));
//char* table[5];
//char tmp;
//
//for (int i = 0; i < 5; i++) *(table + i) = (char*)malloc(sizeof(char));
//
//for (int i = 0; i < 5; i++)
//{
//	fruit[0] = '\0';
//
//	printf("과일이름 : ");
//	scanf("%c", &tmp);
//	int len;
//
//	while (tmp != '\n')
//	{
//		len = strlen(fruit);
//		(char*)realloc(fruit, sizeof(char) * (len + 1));
//		*(fruit + len) = tmp;
//		*(fruit + len + 1) = '\0';
//		scanf("%c", &tmp);
//	}
//
//	(char*)realloc(table[i], sizeof(char) * (strlen(fruit) + 1));
//	strcpy(table[i], fruit);
//}
//
//printf("=>입력한 이름은 ");
//for (int i = 0; i < 5; i++) printf("%s ", table[i]);
//printf("입니다.");
//}