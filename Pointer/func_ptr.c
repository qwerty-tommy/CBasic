#include<stdio.h>
#include<string.h>
#include<stdlib.h>

////ex1
//void kk1() { puts("��ȣ"); }
//void kk2() { puts("�׷�"); }
//
//int main() {
//	void(*ap)();
//	ap = kk1;
//	ap();
// ap=kk2;
// ap();
//}

////ex2
//void kk1(int a) { printf("�� ����=%d��\n", a); }
//void kk2(int b) { printf("���� ���� = % d��\n", b); }
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
	printf("0. ����\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ������\n");
	printf("4. ����\n");
	printf("===============\n\n");

	printf("�޴��� �����Ͻÿ� : ");
	scanf("%d", &select);

	printf("2���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);

	printf("������ = %f\n", pf[select](a, b));
}