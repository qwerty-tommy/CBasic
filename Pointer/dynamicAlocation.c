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
//	/*if (pmem == NULL) puts("�޸𸮸� �Ҵ��� �� �����ϴ�."); 
//	else {
//		printf("�Ҵ�� �޸� ���̴� %d����Ʈ�Դϴ�. \n", _msize(pmem));
//		pmem = (char*)realloc(pmem, 200);
//
//		if (pmem == NULL) puts("�޸𸮸� ���Ҵ��� �� �����ϴ�.");
//		else printf("���Ҵ�� �޸� ���̴� %d����Ʈ �Դϴ�. \n", _msize(pmem));
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
//	printf("�� ���� ���� �Է��ұ�� : ");
//	scanf("%d", &size);
//
//	int* nums = (int*)malloc(sizeof(int) * size);
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d��° �� : ",i+1);
//		scanf("%d", nums + i);
//	}
//
//	printf("=>�Է��� ���� ");
//	for (int i = 0; i < size; i++) printf("%d ", *(nums + i));
//}

////ex2
//#include <time.h>
//int main() {
//	srand(time(NULL));
//
//	int size;
//	printf("�� ���� ������ �߻��ұ��? : ");
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
//	printf("\n��=%d", sum);
//
//	return 0;
//}

////ex3
//int main() {
//	int size;
//	printf("�� ���� ���� �Է��Ͻðڽ��ϱ�? ");
//	scanf("%d", &size);
//
//	int* nums = (int*)malloc(sizeof(int) * size);
//	
//	int sum=0, avg=0, min=INT_MAX, max=0;
//	for (int i = 0; i < size; i++)
//	{
//		printf("������ �Է��ϼ��� : ");
//		scanf("%d", nums + i);
//
//		sum += *(nums + i);
//		if (min > *(nums + i)) min = *(nums + i);
//		if (max < *(nums + i)) max = *(nums + i);
//	}
//	avg = sum / size;
//
//	printf("��=%d\n���=%d\n�ִ밪=%d\n�ּҰ�=%d\n", sum, avg, max, min);
//}
//	
////ex4
//int main() {
//	char* str = (char*)malloc(sizeof(char)*2);
//	int idx = 0;
//
//	char tmp;
//	printf("���ڸ� �Է��ϼ��� : ");
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
//	printf("���ڸ� �Է��ϼ��� : ");
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
//	printf("���ڸ� �Է��ϼ��� : ");
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
		printf("�����̸� : ");
		scanf("%s", &name);
		table[i] = (char*)malloc(strlen(name) + 1);
		strcpy(table[i],name);
	}

	printf("=>�Է��� �̸��� ");
	for (int i = 0; i < 5; i++) printf("%s ",table[i]);
	printf("�Դϴ�.");
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
//	printf("�����̸� : ");
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
//printf("=>�Է��� �̸��� ");
//for (int i = 0; i < 5; i++) printf("%s ", table[i]);
//printf("�Դϴ�.");
//}