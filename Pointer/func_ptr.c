#include<stdio.h>
#include<string.h>
#include<stdlib.h>

////ex1
//void kk1() { puts("야호"); }
//void kk2() { puts("그래"); }
//
//int main() {
//	void(*ap)();
//	ap = kk1;
//	ap();
// ap=kk2;
// ap();
//}

////ex2
//void kk1(int a) { printf("형 나이=%d살\n", a); }
//void kk2(int b) { printf("동생 나이 = % d살\n", b); }
//void main() {
//	void(*ap)(int);
//	ap = kk1;
//	ap(25);
//}

//ex3
//int func(int n1, int n2) {
//	printf("%d %d\n", n1, n2);
//	return n1 + n2;
//}
//
//void main() {
//	int (*fp)(int, int);
//
//	fp = func;
//	printf("%x %x\n", fp, func);
//	printf("%d %x\n", fp(1,5), func);
//}

////pr1
//int add(int a, int b) {
//	return a + b;
//}
//
//int sub(int a, int b) {
//	return a - b;
//}
//
//int main() {
//	int (*fp)(int, int);
//
//	fp = add;
//	printf("%d\n", fp(5, 3));
//
//	fp = sub;
//	printf("%d\n", fp(5, 3));
//}

//pr2
double add(double a, double b) {
	return a + b;
}

double sub(double a, double b) {
	return a - b;
}

double mul(double a, double b) {
	return a + b;
}

double dvd(double a, double b) {
	return a / b;
}

int main() {
	int select;
	int a, b;
	double(*pf[4]) (double a, double b) = { add,sub,mul,dvd };

	printf("===============\n");
	printf("0. 덧셈\n");
	printf("1. 뺄셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
	printf("===============\n\n");

	printf("메뉴를 선택하시오 : ");
	scanf("%d", &select);

	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);

	printf("연산결과 = %f\n", pf[select](a, b));
}