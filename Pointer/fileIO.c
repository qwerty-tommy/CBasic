#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

////ex01
//int main() {
//	FILE* ifp, * ofp;
//
//	ifp = fopen("c:\\tmp\\data.txt", "r");
//	if (ifp == NULL) {
//		printf("�Է� ������ ���� ���� �ʾҽ��ϴ�.\n");
//		return 1;
//	}
//	printf("�Է� ������ ����Ǿ����ϴ�.\n");
//
//	ofp = fopen("c:\\tmp\\bdata.txt", "w");
//	if (ofp == NULL) {
//		printf("��� ������ ���� ���� �ʾҽ��ϴ�.\n");
//		return 1;
//	}
//	printf("��� ������ ����Ǿ����ϴ�.\n");
//	return 0;
//}

////ex02
//int main() {
//	FILE* fp;
//	char ch;
//
//	fp = fopen("c:\\tmp\\data.txt", "r");
//	if (fp == NULL) {
//		printf("���� ���� ����\n");
//		return 1;
//	}
//
//	ch = fgetc(fp);
//	printf("�Է��� ���� : %c\n", ch);
//	fclose(fp);
//	return 0;
//}

////ex03
//int main() {
//	FILE* fp;
//	char ch;
//
//	fp = fopen("c:\\tmp\\data.txt", "r");
//	if (fp == NULL) {
//		printf("���� ���� ����\n");
//		return 1;
//	}
//
//	while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF) break;
//		printf("�Է��� ���� : %c\n", ch);
//	}
//
//	fclose(fp);
//	return 0;
//}

////ex04
//void main() {
//	FILE* out;
//	out = fopen("c:\\tmp\\bdata.txt", "w");
//	fprintf(out, "%10s%10s%10s\n", "�̸�", "����", "�÷�");
//	fprintf(out, "%10s%10d%10.1f\n", "�浿",11,1.5);
//	fclose(out);
//}

////ex05
//int main() {
//	FILE* fp;
//	char ch;
//
//	fp = fopen("c:\\tmp\\data.txt", "r");
//	if(fp==NULL){
//		printf("���� ���� ����\n");
//		return 1;
//	}
//
//	while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF) break;
//		putchar(ch);
//	}
//	fclose(fp);
//	return 0;
//}

////ex06
//int main() {
//	FILE* fp;
//	char ch;
//
//	fp = fopen("c:\\tmp\\bdata.txt", "w");
//	if (fp == NULL) {
//		printf("���� ���� ����\n");
//		return 1;
//	}
//	printf("�����͸� �Է��ϼ���\n");
//	while ((ch=getchar())!=EOF) {
//		/*ch = getchar();
//		if (ch == EOF) break;*/
//		fputc(ch, fp);
//	}
//	fclose(fp);
//	return 0;
//}

////ex07
//int main() {
//	FILE* out;
//	char m[11] = "ABCD";
//	out = fopen("c:\\tmp\\bdata.txt", "w");
//	fputs(m, out);
//	fputs("E", out);
//	fputs("\n", out);
//	fputs("FG\n", out);
//	fputs("HIJKL" + 2, out);
//	fclose(out);
//}

////ex08
//int main() {
//	FILE* in;
//	char m[11];
//	int k, e;
//	in = fopen("c:\\tmp\\data.txt", "r");
//	if (in == NULL) {
//		puts("File Not Found\n");
//		return 1;
//	}
//
//	int j;
//	while (1) {
//		j = fscanf(in, "%s%d%d", m, &k, &e);
//		printf("%6s%6s%6s\n", "�̸�", "����", "����");
//		printf("%6s%6d%6d\n", m, k, e);
//		if (j == EOF) break;
//		getchar();
//	}
//	fclose(in);
//	return 0;
//}

////ex09
//int main() {
//	char ch;
//
//	while (1) {
//		ch = fgetc(stdin);
//		if (ch == EOF) break;
//		fputc(ch, stdout);
//	}
//	return 0;
//}

////ex10
//int main() {
//	FILE* fp;
//	char ch;
//	int cnt = 0;
//
//	fp = fopen("c:\\tmp\\data.txt", "r");
//	if (fp == NULL) {
//		printf("���� ���� ����\n");
//		return 1;
//	}
//
//	while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF) break;
//		putchar(ch);
//		if (ch == '.') {
//			putchar('\n');
//			cnt++;
//			if (cnt % 3 == 0) putchar('\n');
//		}
//	}
//	fclose(fp);
//	return 0;
//}

////ex11
//int main() {
//	FILE* ifp, * ofp;
//	char str[80];
//	char* res;
//
//	ifp = fopen("c:\\tmp\\data.txt", "r");
//	if (ifp == NULL) {
//		printf("�Է� ���� ���� ����\n");
//		return 1;
//	}
//
//	ofp = fopen("c:\\tmp\\bdata.txt", "w");
//	if (ofp == NULL) {
//		printf("��� ���� ���� ����");
//		return 1;
//	}
//
//	while (1)
//	{
//		res = fgets(str, sizeof(str), ifp);
//		if (res == NULL) break;
//		str[strlen(str) - 1] = '\0';
//		fputs(str, ofp);
//		fputs(" ", ofp);
//	}
//
//	fclose(ofp);
//	return 0;
//}


//==================

//ex1