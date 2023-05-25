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
//		printf("입력 파일이 개방 되지 않았습니다.\n");
//		return 1;
//	}
//	printf("입력 파일이 개방되었습니다.\n");
//
//	ofp = fopen("c:\\tmp\\bdata.txt", "w");
//	if (ofp == NULL) {
//		printf("출력 파일이 개방 되지 않았습니다.\n");
//		return 1;
//	}
//	printf("출력 파일이 개방되었습니다.\n");
//	return 0;
//}

////ex02
//int main() {
//	FILE* fp;
//	char ch;
//
//	fp = fopen("c:\\tmp\\data.txt", "r");
//	if (fp == NULL) {
//		printf("파일 개방 실패\n");
//		return 1;
//	}
//
//	ch = fgetc(fp);
//	printf("입력한 문자 : %c\n", ch);
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
//		printf("파일 개방 실패\n");
//		return 1;
//	}
//
//	while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF) break;
//		printf("입력한 문자 : %c\n", ch);
//	}
//
//	fclose(fp);
//	return 0;
//}

////ex04
//void main() {
//	FILE* out;
//	out = fopen("c:\\tmp\\bdata.txt", "w");
//	fprintf(out, "%10s%10s%10s\n", "이름", "나이", "시력");
//	fprintf(out, "%10s%10d%10.1f\n", "길동",11,1.5);
//	fclose(out);
//}

////ex05
//int main() {
//	FILE* fp;
//	char ch;
//
//	fp = fopen("c:\\tmp\\data.txt", "r");
//	if(fp==NULL){
//		printf("파일 개방 실패\n");
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
//		printf("파일 개방 실패\n");
//		return 1;
//	}
//	printf("데이터를 입력하세요\n");
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
//		printf("%6s%6s%6s\n", "이름", "국어", "영어");
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
//		printf("파일 개방 실패\n");
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
//		printf("입력 파일 개방 실패\n");
//		return 1;
//	}
//
//	ofp = fopen("c:\\tmp\\bdata.txt", "w");
//	if (ofp == NULL) {
//		printf("출력 파일 개방 실패");
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


//========pr시작==========

////pr01
//int main() {
//	FILE* fp;
//	fp = fopen("c:\\tmp\\data.txt", "w");
//	
//	if (fp == NULL) {
//		printf("fderr\n");
//		return 1;
//	}
//
//	fprintf(fp,"사과\t100\t5\n");
//	fprintf(fp,"오렌지\t200\t3\n");
//
//	fclose(fp);
//	return 0;
//}

////pr02
//int main() {
//	FILE* fp;
//	fp = fopen("c:\\tmp\\data.txt", "w");
//	
//	if (fp == NULL) {
//		printf("fderr\n");
//		return 1;
//	}
//
//	fprintf(fp, "*** 매출현황 ***\n");
//	fprintf(fp,"사과\t100\t5\t500\n");
//	fprintf(fp,"오렌지\t200\t3\t600\n");
//	fprintf(fp,"-----------------------------\n");
//	fprintf(fp,"합\t300\t8\t1100\n");
//
//	fclose(fp);
//
//	fp = fopen("c:\\tmp\\data.txt", "r");
//
//	if (fp == NULL) {
//		printf("fderr\n");
//		return 1;
//	}
//
//	char c;
//	while ((c = fgetc(fp) )!= EOF) {
//		putchar(c);
//	}
//
//	fclose(fp);
//	return 0;
//}

////pr03
//int main() {
//	char buf[100];
//	FILE* fp;
//	fp = fopen("c:\\tmp\\data.txt", "w");
//
//	if (fp == NULL) {
//		printf("fderr\n");
//		return 1;
//	}
//
//	for (int i = 0; i < 2; i++)
//	{
//		printf("주민번호 : ");
//		scanf("%s", buf);
//		strcat(buf,"\t");
//		fprintf(fp, buf);
//
//		printf("이름 : ");
//		scanf("%s", buf);
//		strcat(buf, "\t");
//		fprintf(fp, buf);
//
//		printf("성별 : ");
//		scanf("%s", buf);
//		strcat(buf, "\t");
//		fprintf(fp, buf);
//
//		printf("전화번호 : ");
//		scanf("%s", buf);
//		strcat(buf, "\t");
//		fprintf(fp, buf);
//
//		printf("주소 : ");
//		scanf("%s", buf);
//		strcat(buf, "\n");
//		fprintf(fp, buf);
//	}
//
//	fclose(fp);
//	return 0;
//}

////pr04
//int main() {
//	char buf[100];
//	FILE* fp;
//	fp = fopen("c:\\tmp\\data.txt", "r");
//
//	if (fp == NULL) {
//		printf("fderr\n");
//		return 1;
//	}
//
//	char* s;
//
//	printf("주민번호\t이름\t생년월일\t성별\t전화번호\t주소\n");
//
//	int cnt = 0;
//	while (1) {
//		//if (cnt++ % 6 == 0) printf("\n");
//		if (s = fgets(buf, sizeof(buf), fp) == NULL) break;
//		printf("%s", buf);
//	}
//
//	fclose(fp);
//	return 0;
//}

////pr05
//int main() {
//	char src[100];
//	char dst[100];
//	FILE* fp;
//	fp = fopen("c:\\tmp\\data.txt", "r");
//
//	if (fp == NULL) {
//		printf("fderr\n");
//		return 1;
//	}
//
//	fgets(src, sizeof(src), fp);
//	fgets(dst, sizeof(dst), fp);
//
//	int cnt = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (src[i] == dst[i]) cnt++;
//		else break;
//	}
//
//	printf("앞에서 %d글자가 동일합니다.",cnt);
//
//	fclose(fp);
//	return 0;
//}

//pr06
typedef struct _product
{
	char name[20];
	int quantity;
	int price;
}Product;

Product input() {
	Product tmp;

	printf("품목 : ");
	scanf("%s", tmp.name);

	printf("수량 : ");
	scanf("%d", &tmp.quantity);

	printf("단가 : ");
	scanf("%d", &tmp.price);

	return tmp;
}

void save(Product pr) {
	FILE* fp;
	fp = fopen("c:\\tmp\\data.txt", "a");
	char buf[100];

	strcat(pr.name, "\t");
	fprintf(fp, pr.name);

	itoa(pr.quantity, buf, 10);
	strcat(buf, "\t");
	fprintf(fp, buf);

	itoa(pr.price, buf, 10);
	strcat(buf, "\n");
	fprintf(fp, buf);

	fclose(fp);
}

void read() {
	FILE* fp;
	fp = fopen("c:\\tmp\\data.txt", "r");
	char buf[100];

	printf("품목\t수량\t단가\n");

	while (1) {
		if (fgets(buf, sizeof(buf), fp) == NULL) break;
		printf("%s", buf);
	}
}

int main() {
	int sel;
	Product tmp;

	while (1) {
		printf("\n== 매뉴 ==\n");
		printf("1. 데이터 입력\n");
		printf("2. 파일에 저장\n");
		printf("3. 파일에서 읽어오기\n");
		printf("4. 종료\n");
		
		printf("==> ");
		scanf("%d", &sel);

		switch (sel)
		{
		case 1:
			tmp=input();
			break;
		case 2:
			save(tmp);
			break;
		case 3:
			read();
			break;
		case 4:
			return;
		default:
			break;
		}
	}

}