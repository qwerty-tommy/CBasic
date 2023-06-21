#ifndef ArraySTACK
#define ArraySTACK

#define MAX_STACK_SIZE 100
#define MAX_STRING 100

//typedef struct {
//	int idx;
//	int height;
//}element;

typedef struct {
	int x;
	int y;
}element;

typedef struct {
	element stack[MAX_STACK_SIZE];
	int top;
}StackType;

void init(StackType* s);
int is_empty(StackType* s);
int is_full(StackType* s);
void push(StackType* s,element item);
element pop(StackType* s);
element peek(StackType* s);

#endif // ArraySTACK