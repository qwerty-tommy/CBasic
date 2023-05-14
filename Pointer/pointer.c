#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "MyString.h"

//ex1
//int main() {
//	short a;
//	short b;
//	short c;
//
//	a = 10;
//	*&b = *&a + 2;
//	*&a += 4;
//	c = a + b;
//	printf("%d\n", c);
//}

//ex2
//int main() {
//	long m[3] = { 10,20,30 };
//	long k;
//	k = *m + m[1] + *(m + 1);
//	k += *&m[2] + *m + 1;
//	printf("%d\n", k);
//}

//ex3
//int main() {
//	char m[] = { 'A','B','C','D' };
//	int N = sizeof(m);
//	int a;
//	*&m[0] += 32;
//	*(m + 1) += 1;
//	++* (m + 2);
//	*(m + 3) += 2;
//	for ( a = 0; a < N; a++)
//	{
//		putchar(*(m + a));
//	}
//}

//ex4
//int main() {
//	short m[2][2] = { {10,20},{30,40 } };
//	short a;
//	a = m[0][0] + m[0][1] + m[1][0] + m[1][1];
//	a += (*&m[1][0] + *m[0] + *(m[1] + 1));
//	a -= **m;
//	a += *(*(m + 1) + 1);
//	printf("%d\n", a);
//}

//ex5
//int main() {
//	short m[2][2] = { {10,20},{30,40} };
//	short a, sum = 0;
//	*m[0] = 15;
//	*(m[0] + 1) = 25;
//	*m[1] = 35;
//	m[0][3] = 45;
//	
//	**m = 17;
//	*(*(m + 1) + 1) = 47;
//	*(*m + 1) = 27;
//	**(m + 1) = 37;
//	m[1][-1] += 2;
//	for ( a = 0; a < 4; a++)
//	{
//		sum += m[0][a];
//	}
//
//	printf("%d\n", sum);
//}

//ex6
//int main() {
//	short m[2][2][2] = { {{10,20},{30,40}},{{50,60},{70,80}} };
//	int a, b, c;
//	short cnt = 0;
//
//	++* m[0][0];
//	*m[0][1] += 2;
//	*m[1][0] += 3;
//	*m[1][1] += 4;
//	++* (m[0][0] + 1);
//	*(m[0][1] + 1) += 2;
//	*(m[1][0] + 1) += 3;
//	*(*(m[0] + 0) + 1) = *(*m[0] + 1) + *(**m + 1) + 2;
//	*(*(m[0] + 1)) = *(*(*m + 1)) + 3;
//
//	for ( a = 0; a < 2*2*2; a++)
//	{
//		if (m[0][0][a] >= 40) m[0][0][a] /= 2;
//	}
//
//	for ( a = 0; a < 2; a++)
//	{
//		for ( b = 0; b < 2; b++)
//		{
//			for ( c = 0; c < 2; c++)
//			{
//				if (m[a][b][c] / 10 == 2) cnt++;
//
//				printf("%d", m[a][b][c]);
//			}
//		}
//	}
//
//	printf("%d\n", cnt);
//
//}

//ex7
//int main() {
//	short a, b;
//	short* ap;
//	short c;
//
//	*&a = 5;
//	ap = &b;
//	*ap = a;
//	*ap += 2;
//
//	a = a + *ap;
//	**&ap += 3;
//	c = a + b;
//	printf("%d", c);
//}

//ex8
//int main() {
//	short m[] = { 10,20,30,40 };
//	short* ap;
//	short c;
//	ap = m;
//	
//	c = *ap++;
//	c += *(ap + 1);
//	c += *++ap;
//	c += ap[1]--;
//	c += ap[1];
//	
//	printf("%d\n", c);
//}

//ex9
//int main() {
//	char m[] = { 'P','A','E','\0' };
//	char* ap;
//	int a = 0;
//	ap = m + strlen(m) - 1;		//3번째 주소
//
//	printf("%c\n", *ap--);		//E, 2번째 주소
//	*--ap = 'T';		//m=TAE, 1번째 주소
//	printf("%s\n", ap);		//TAE
//
//	printf("%c\n", *++ap);		//A, 2번째 주소
//	printf("%c\n",ap[a++]);		//A, a=1
//	printf("%c\n", ap[--a]);	//A, a=0
//}

//ex10
//int main() {
//	short m[2][2] = { {10,20},{30,40} };
//	short* ap;
//	short c;
//
//	ap = m[0];		//ap=0번
//	c = *ap;	//c=10
//	ap++;		//ap=1번
//	c += *ap;		//c=30
//
//	ap += 2;		//ap=3번
//	c += *ap;		//c=70
//	c += *ap--;		//c=110, ap=2번
//	c += *--ap;		//c=130, ap=1번
//
//	printf("%d %d %d %d\n", m[0][0], m[0][1], m[1][0], m[1][1]);		//10 20 30 40
//
//	c += *ap;		//c=150
//	c += ap[-1];		//c=160
//	c += ++ * ap;		//c=181, 20=21
//	ap++;			//ap=2번
//
//	c += ap[1];		//c=221
//	printf("%d\n", ++ * ap);	//31	30=31
//	printf("%d\n", c);		//221
//}

//ex11
//int main() {
//	short m[2][2] = { {10,20},{30,40} };
//	short* ap;
//	short c;
//
//	ap = m[0];		//ap=0번
//	c = *ap;	//c=10
//	ap++;		//ap=1번
//	c += *ap;		//c=30
//
//	ap += 2;		//ap=3번
//	c += *ap;		//c=70
//	c += *ap;		//c=110
//	c += *--ap;		//c=140, ap=2번
//
//	printf("%d %d %d %d\n", m[0][0], m[0][1], m[1][0], m[1][1]);		//10 20 30 40
//
//	c += *(ap-2);		//c=150
//	c += ap[-1];		//c=170
//
//	c += ++ * ap;		//30=31, c=201
//	ap++;			//ap=3번
//	c -= ap[-1];	//c=170
//
//	printf("%d\n", ++ * ap);	//41, 40=41
//	printf("%d\n", c);		//170
//}

//ex12
//void main() {
//	short m[2][2] = { {10,20},{30,40} };
//	short* ap, *bp;
//	short a, sum = 0;
//
//	ap = m[0];		//ap=idx0
//	bp = m[0] + sizeof(m) / sizeof(m[0][0]) - 1;		//bp=idx3
//
//	for (a = 0; a < sizeof(m) / sizeof(m[0][0]); a++)
//		sum += *ap++ + *bp--;	//sum=200, ap=idx3+1, bp=idx0-1
//
//	*--ap = 45;		//ap=idx3, 40=45
//	*++bp = 15;		//bp=idx0, 10=15
//	a = 0;		//a=0
//	bp[++a]++;		//a=1, 20=21
//
//	printf("%d %d\n", *ap,a);
//	++ap[-a--];		//a=0, 30=31
//	ap = m[0];		//ap=idx0
//
//	for (; a < sizeof(m) / sizeof(m[0][0]); a++)		
//		sum -= ap[a];		//sum=200-15-21-31-45;88
//
//	ap = m[1] - sizeof(m[0]) / sizeof(m[0][0]);		//ap=idx0
//	printf("%d\n", sum);		//88
//	printf("%d %d %d %d \n", m[0][0], m[0][1], m[1][0], m[1][1]);		//15 21 31 45
//}

//strcpy 오류발생!
//ex13
//void main() {
//	char m[] = "ABC";
//	char* ap = "ABC";
//
//	puts(m);	//ABC
//	puts(ap);	//ABC
//
//	ap = "DEF";
//	puts(ap);		//DEF
//
//	printf("%c", ap[1]);	//E
//	strcpy(m, "YZ");
//	puts(m);	//YZC
//}

//ex14
//void main() {
//	char m[4] = "ABC";
//	printf("%c%c%c\n", m[0], m[1], m[2]);	//ABC
//	*m = 'X';
//	*(m + 1) = 'Y';
//	*(m + 2) = 'Z';
//	puts(m);		//XYZ
//}

////ex15
//void main() {
//	char m[2][5] = { "ABC","XYZ" };
//	printf("%c%c%c\n", m[0][0], m[0][1], m[0][2]);	//ABC
//	puts(&m[1][0]);		//XYZ
//
//	*(m[0] + 1) = 'F';	
//	*(m[1] + 1) = 'E';	
//	
//	puts(m[0]);		//AFC
//	puts(*m);		//AFC
//
//	strcpy(m[1], "GHI");				
//	puts(*(m + 1));		//GHI
//	printf("%c\n", **m);	//AFC
//}

//ex16
//void main() {
//	char m[] = "ABC";
//	char* ap = m;
//	*ap++ += 1;		//m=BBC, ap=idx1
//	*++ap += 3;		//m=BBF, ap=idx2
//	ap -= 2;		//ap=idx0 
//	ap[1] += 2;		//m=BDF
//	puts(m);		//BDF
//}

////ex17
//void main() {
//	char m[2][7] = { "KOREA","SEOUL" };
//	char* ap = m[0];
//	puts(m[0]);		//KOREA
//	puts(ap);		//KOREA
//	ap += sizeof(m[0]);		//ap=idx7
//	puts(ap++);		//SEOUL, ap=idx8
//
//	printf("%c\n", ap[2]);		//U
//	printf("%c\n", *ap--);		//E, idx7
//
//	puts(ap);		//SEOUL
//	printf("%c\n", *++ap);		//E
//}

////질문-왜 쓰레기값 출력이 안되는지..?
////ex18
//void main() {
//	char* ap = "KOREA";
//	char m[5] = { 0 };
//	int a = 0;
//	m[0] = ap[a++];		//a=1, Kxxxx
//	m[1] = *++ap;		//ap=idx1, KOxxx
//	m[2] = ap[++a];		//a=2, KOExx
//	m[3] = ap[a-1];		//KOERx
//	puts(m);
//}

//==============포인터 2=====================

////ex1
//int main() {
//	char* cpu = "computer";
//	int len = strlen(cpu);
//
//	for (int i = 0; i < len; i++)
//		printf("%s\n", cpu++);
//
//	return 0;
//}

////ex2
//int main() {
//	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = array+1;
//
//	for (int i = 0; i < 5; i++, p += 2)
//		printf("%d", *p);
//}

////ex3
//void SaChick(double a, double b, double* ap) {
//	double* p = ap;
//	*p++ = a + b;
//	*p++ = a - b;
//	*p++ = a * b;
//	*p = (float)a / (float)b;
//}
//
//int main() {
//	double a = 5, b = 2;
//	double m[4];
//
//	SaChick(a, b, m);
//
//	printf("%.1f %.1f\n", m[0], m[1]);
//	printf("%.1f %.1f\n", m[2], m[3]);
//}

//==============poiner3===============
// 
////ex4  a=97-122   A=65-90
//void MyUpper(char* str) {
//	int size = strlen(str);
//
//	for (int i = 0; i < size; i++,str++)
//	{
//		if (*str >= 97 && *str <= 122)
//			*str -= 32;
//	}
//}
//
//int main() {
//	char string[] = "h3lI0 w0rId";
//	MyUpper(string);
//
//	printf("%s", string);
//}

////ex5

//
//int main() {
//	char string[] = "h3lI0 w0rId";
//
//	printf("%d", Mystrlen(string));
//}

////ex6

//
//	for (int i = 0; i < strlen(str) / 2; i++, sp++, ep--)
//	{
//		buf = *sp;
//		*sp = *ep;
//		*ep = buf;
//	}
//}
//
//int main() {
//	char string[] = "h3lI0 w0rId";
//	MystrReverse(string);
//
//	printf("%s", string);
//}

////ex7

//
//int main() {
//	char string[]= "h3lI0 w0rId";
//	MyNoSpace(string);
//
//	printf("%s", string);
//}

////ex8-질문 포인터 어떻게 바꾸는지?
//void myStrcat(char* ap, char* bp) {
//
//}
//
//void main() {
//	char m[6] = "AB";
//	myStrcat(m, "CD");
//	puts(m);
//}

////ex9

//
//void main() {
//	char m[4];
// 	puts(myStrcpy(m, "AB"));
//	puts(m);
//}

////ex10

//
//void main() {
//	char m[4] = { 0, };
//	myStrncpy(m, "ABCD", 3);
//	puts(m);
//}

////ex11
//int myAbs(int a) {
//	return (a < 0) ? -a : a;
//}
//
////ex12

//
////ex13

//
////ex14

//
////ex15


////ex11~15 test
//int main() {
//	printf("%d\n",myAbs(-1));
//	printf("%d\n\n", myAbs(3));
//
//	char* src = "hell world he he";
//	char* dst = "hEllo world";
//	char* test = "he";
//
//	printf("%d\n", myStrcmp(src, dst));
//	printf("%d\n\n", myStrcmp(src, src));
//	
//	printf("%d\n", myStricmp(src, dst));
//	printf("%d\n", myStricmp(src, test));
//	printf("%d\n\n", myStricmp(src, src));
//
//	printf("%d\n", myStrincmp(src, dst,3));
//	printf("%d\n", myStrincmp(src, test,7));
//	printf("%d\n\n", myStrincmp(src, dst, 7));
//
//	printf("%d\n", MySearch(src, "qwer"));
//	printf("%d\n", MySearch(src, "hell"));
//	printf("%d\n", MySearch(src, "world"));
//
//	printf("%d", MyCountWord(src, test));
//
//	MyConvertWord(src, test,"ro");
//	printf("%s", src);
//}

//ex19	동적할당 안쓰고 어떻게하는지?
//#include <stdio.h>
//int main() {
//	char *name;
//	char* tel;
//	char* addr;
//
//	printf("이름을 입력하시오 : ");
//	scanf("%s", name);
//	printf("전화번호를 입력하시오 : ");
//	scanf("%s", tel);
//	printf("주소를 입력하시오 : ");
//	scanf("%s", addr);
//}


//ex20

//testcase	187167965197896718958	152686154875451483871
int main() {
	char input1[71] = { 0, };
	char input2[71] = { 0, };
	char result[72] = { 0, };

	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%s", input1);

	printf("두번째 숫자를 입력하세요 : ");
	scanf("%s", input2);;
	
	int len1 = MyStrlen(input1);
	int len2 = MyStrlen(input2);
	int carry = 0;

	int first_carry = input1[0] + input2[0] - '0' - '0' > 9 ? 1 : 0;

	//printf("%s\n%s\n", input1, input2);

	MyStrReverse(input1);
	MyStrReverse(input2);

	//printf("%s\n%s\n", input1,input2);

	char num1, num2;

	for (int i = 0; i < 71; i++)
	{
		num1 = (i < len1) ? *(input1+i) : '0';
		num2 = (i < len2) ? *(input2+i) : '0';

		if (carry + num1 + num2 - '0' >= '0' + 10) {
			*(result + i) = carry + num1 + num2 - '0' - 10;
			carry = 1;0000
		} else {
			*(result + i) = carry + num1 + num2 - '0';
			carry = 0;
		}
	}

	MyStrReverse(result);

	int max_Length = len1 > len2 ? len1 : len2+ first_carry;
	for (int i = 70 - max_Length + 1; i < 71; i++)
	{
		printf("%c", *(result + i));
	}
}