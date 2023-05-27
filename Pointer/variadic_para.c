#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

////ex01
//void kk(int a, ...) {
//	void* ap;
//	ap = &a;
//	printf("%u %d\n", ap, *(int*)ap);
//	ap = (int*)ap + 1;
//
//	printf("%u %d\n", ap, *(int*)ap);
//	ap = (int*)ap + 1;
//
//	printf("%u %.1f\n", ap, *(double*)ap);
//	ap = (double*)ap + 1;
//
//	printf("%u %d\n", ap, *(int*)ap);
//}
//
//void main() {
//	kk(3, 10, 20.5, 30);
//}

////ex02
//void kk(int a, ...) {
//	va_list ap;
//	va_start(ap, a);
//
//	printf("%u ", &a);	printf("%d\n", a);
//	printf("%u ", ap);	printf("%d\n", va_arg(ap,int));
//	printf("%u ", ap);	printf("%.1f\n", va_arg(ap,double));
//	printf("%u ", ap);	printf("%d\n", va_arg(ap,int));
//	va_end(ap);
//}
//
//void main() {
//	kk(3, 10, 20.5, 30);
//}

////ex03
//int kk(int n, ...) {
//	va_list ap;
//	int a, b, sum = 0;
//	va_start(ap, n);
//
//	for ( a = 0; a < n; a++)
//	{
//		b = va_arg(ap, int);
//		printf("%d+", b);
//		sum += b;
//	}
//	printf("\b=%d\n", sum);
//	va_end(ap);
//	return sum;
//}
//
//int main() {
//	kk(3, 1, 2, 3);
//	kk(4, 10, 20, 30, 40);
//	printf("합=%d\n", kk(5, 1, 3, 5, 7, 9));
//}

////pr01
//void kk(char msg, ...) {
//	char* arg;
//	arg = (char*)&msg;
//	
//	printf("%c\n", *(char*)arg);
//	arg = arg + sizeof(char*);
//
//	printf("%d\n", *(int*)arg);
//	arg = arg + sizeof(int);
//
//	printf("%.2f\n", *(double*)arg);
//	arg = arg + sizeof(double);
//
//	printf("%s\n", *(char**)arg);
//}
//
//int main() {
//	kk('1', 2, 3.0, "four");
//}

//pr03
void myPrint(char* msg, ...) {
	va_list ap;
	va_start(ap, msg);
	char buf;

	while (*msg != NULL)
	{
		if (*msg == '%') msg++;


		switch (*msg)
		{
		case 'd':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 'c':
			printf("%c", va_arg(ap, char));
			break;
		case 's':
			printf("%s", va_arg(ap, char*));
			break;

		default:
			printf("%c", *msg);
			
		}
		msg++;
	
	}
}

int main() {
	myPrint("name=%s\nage=%d\nheight=%f\n", "Kim", 12, 120.5);
}

////pr04
//void myScanf(char* msg, ...) {
//
//}
//
//int main() {
//	char name[11];
//	int age;
//	double height;
//	printf("이름과 나이와 키?");
//	myScanf("%s%d%f", name, &age, &height);
//	printf("이름=%s\t나이=%d\t키%.2f입니다.", name, age, height);
//}