#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

//ex1
//void kk1(int n) {
//	if (n == 0) return;
//	kk1(n - 1);
//	printf("%3d", n);
//}
//
//void kk2(int a, int n) {
//	printf("%3d", a);
//	if (a == n) return;
//	kk2(a + 1, n);
//	printf("%3d", a);
//}
//
//void main() {
//	kk1(3);
//	printf("\n");
//
//	kk2(1,3);
//	printf("\n");
//}

////ex2
//void disp1(int a, int b) {
//	if (a > b) return;
//	printf("%3d", a);
//	disp1(a + 1, b);
//}
//
//void disp2(int a, int b) {
//	if (a < b) return;
//	printf("%3d", a);
//	disp2(a - 1, b);
//}
//
//void disp(int a, int b) {
//	if (b > a)disp1(a, b);
//	else disp2(a, b);
//	printf("\n");
//}
//
//void main() {
//	int a, b;
//	a = 1; b = 3;
//	disp(a, b); disp(b, a);
//}

////ex3
//int sum(int n) {
//	printf("%d, ", n);
//	if (n < 1) return 1;
//	else return n + sum(n - 1);
//}
//
//void main() {
//	printf("%d ", sum(5));
//}

////ex4
//int recursive(int n) {
//	printf("%d ,", n);
//	if (n < 1) return 2;
//	else return (2 * recursive(n - 1) + 1);
//}
//
//void main() {
//	printf("%d ", recursive(5));
//}

////ex5
//int recursive(int n) {
//	printf("%d ,", n);
//	if (n < 1) return 2;
//	else return (recursive(n - 3) + 1);
//}
//
//void main() {
//	printf("%d ", recursive(10));
//}

////ex6
//int recursive(int n) {
//	printf("%d ,", n);
//	if (n < 1) return 0;
//	else return (n + recursive(n - 3));
//}
//
//void main() {
//	printf("%d ", recursive(10));
//}

////ex7
//int sum1(int n) { return (n <= 1 ? n : n + sum1(n - 1)); }
//int sum(int a, int n) { return(n <= a ? a : n + sum(a, n - 1)); }
//int pow(int a, int n) { return (n <= 1 ? a : a * pow(a, n - 1)); }
//int fac(int n) { return (n <= 1 ? 1 : n * fac(n - 1)); }
//
//void main() {
//	printf("%d\n", sum1(3));
//	printf("%d\n", sum(1,3));
//	printf("%d\n", pow(2,3));
//	printf("%d\n", fac(3));
//}

//void bubblesort(int ary[], int len) {
//	int i, j;
//	int temp;
//
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = 0; j < len-i-1; j++)
//		{
//			if (ary[j] < ary[j + 1]) {
//				temp = ary[j];
//				ary[j] = ary[j + 1];
//				ary[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[4] = { 3,2,1,4 };
//	int i;
//	bubblesort(arr, sizeof(arr) / sizeof(int));
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

////ex9
//int sub(int n) {
//	printf("%d ", n);
//	if(n < 0) return 0;
//	return n + sub(n - 3);
//}
//
//void main() {
//	printf("%d ", sub(10));
//}


//========================
 
////pr01
//void rec(int n) {
//	if (n > 10) return;
//	printf("%d ", n);
//	rec(n + 2);
//}
//
//int main() {
//	rec(1);
//	return 0;
//}

//
////pr02
//void rec(int n) {
//	if (n < 0) return;
//	printf("%d ", n);
//	rec(n - 5);
//}
//
//int main() {
//	rec(20);
//	return 0;
//}

////pr03
//void rec(int n) {
//	if (n < 0) return;
//	printf("#");
//	rec(n - 1);
//}
//
//int main() {
//	rec(10);
//	return 0;
//}

////pr04
//void rec(int n) {
//	if (n % 10 == 0) printf("\n");
//	if (n < 1) return;
//	printf("#");
//	rec(n - 1);
//}  
//
//int main() {
//	rec(50);
//	return 0;
//}


////pr05
//void rec(int n) {
//	if (n % 10 == 0) printf("\n");
//	if (n >= 50) return;
//	printf("%d", (n+1) % 10);
//	rec(n + 1);
//}  
//
//int main() {
//	rec(0);
//	return 0;
//}

////pr06
//void rec(int n) {
//	if (n >= 6) return;
//	for (int i = 0; i < n; i++)
//	{
//		printf("#");
//	}
//	printf("\n");
//	rec(n + 1);
//}  
//
//int main() {
//	rec(1);
//	return 0;
//}

////pr07
//void rec(int n) {
//	if (n < 0) return;
//	for (int i = 0; i < n; i++)
//	{
//		printf("#");
//	}
//	printf("\n");
//	rec(n - 1);
//}
//
//int main() {
//	rec(5);
//	return 0;
//}

////pr08
//void rec(int n) {
//	if (n < 0) return;
//	for (int i = 0; i < n; i++)
//	{
//		printf(" ");
//	}
//
//	for (int i = 0; i < 6-n; i++)
//	{
//		printf("#");
//	}
//
//	for (int i = 0; i < 5-n; i++)
//	{
//		printf("#");
//	}
//	printf("\n");
//	rec(n - 1);
//}
//
//int main() {
//	rec(5);
//	return 0;
//}

////pr09
//void rec(int n) {
//	if (n > 5) return;
//	for (int i = 0; i < n; i++)
//	{
//		printf(" ");
//	}
//
//	for (int i = 0; i < 6-n; i++)
//	{
//		printf("#");
//	}
//
//	for (int i = 0; i < 5-n; i++)
//	{
//		printf("#");
//	}
//	printf("\n");
//	rec(n + 1);
//}
//
//int main() {
//	rec(0);
//	return 0;
//}


////pr10
//int rec(int n) {
//	if (n < 1) return 0;
//
//	int sum = n + rec(n - 1);
//	printf("%d ", n);
//	 return sum;
//}
//
//int main() {
//	printf("\n%d", rec(10));
//	return 0;
//}

////pr11
//int cache[10] = {0,};
//
//int rec(int n) {
//	if (cache[n] != 0) return cache[n];
//
//	if (n < 1) return 0;
//
//	int sum = n + rec(n - 1);
//	cache[n] = sum;
//	printf("%d ", n);
//	return sum;
//}
//
//int main() {
//	int first;
//	int second;
//
//	printf("첫번째 수 : ");
//	scanf("%d", &first);
//	printf("두번째 수 : ");
//	scanf("%d", &second);
//
//	printf("\n%d", rec(second)-rec(first-1));
//	return 0;
//}

////pr12
//int rec(int n) {
//	if (n < 1) return 1;
//
//	int sum = n * rec(n - 1);
//	 return sum;
//}
//
//int main() {
//	int tmp;
//	scanf("%d", &tmp);
//	printf("\n%d", rec(tmp));
//	return 0;
//}

//////pr13
//int rec(int* arr, int target, int start, int end) {
//	if ((start >= end) && (arr[start]!=target)) return -1;
//
//	int mid = (start + end) / 2;
//
//	if (arr[mid] > target)
//	{
//		return rec(arr, target, start, mid - 1);
//	}
//	else if (arr[mid] < target) {
//		return rec(arr, target, mid + 1, end);
//	}
//	else {
//		return mid;
//	}
//}
//
//int main() {
//	int arr[10] = { 5,7,10,15,30,40,55,80,88,100 };
//	int target;
//	int res;
//
//	while (1) {
//		printf("찾을값 : ");
//		scanf("%d", &target);
//
//		res = rec(arr, target,0,9);
//
//		if (res == -1) printf("탐색실패\n\n");
//		else  printf("타겟저장인덱스 : %d\n\n", res);
//	}
//
//	return 0;
//}
//

////pr14
//
//int pow(int a, int b) {
//	if (b == 0) return 0;
//	if (b == 1) return a;
//
//	if (b % 2 == 1) return pow(a, b / 2 + 1) * pow(a, b / 2);
//	if (b % 2 == 0) return pow(a, b / 2) * pow(a, b / 2);
//}
//
//int main() {
//	int a, b;
//	printf("어떤 수의 몇 승을 구할까요? ");
//	scanf("%d %d", &a, &b);
//
//	printf("%d", pow(a, b));
//}