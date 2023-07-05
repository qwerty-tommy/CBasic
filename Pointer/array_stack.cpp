#include <stdio.h>
#include <stdlib.h>
#include "array_Stack.h"

void init(StackType* s) {
	s->top = -1;
}

int is_empty(StackType* s) {
	return (s->top == -1);
}

int is_full(StackType* s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType* s,element item) {
	if (is_full(s)) {
		fprintf(stderr, "stack full err\n");
		return;
	}
	else s->stack[++(s->top)] = item;
}

element pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "stack empty err\n");
		exit(1);
	}
	else return s->stack[(s->top)--];
}

element peek(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "stack empty err\n");
		exit(1);
	}
	else return s->stack[(s->top)];
}