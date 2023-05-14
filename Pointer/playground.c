#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int val;
}Int;

void test(int *a) {
	(*a)--;
}

void test_st(Int* b) {
	(*b).val--;
}

int main() {
	int* a;
	*a = 1;
	test(a);

	Int* b = (Int*)malloc(sizeof(Int));
	(*b).val = 1;
	test(b);
}