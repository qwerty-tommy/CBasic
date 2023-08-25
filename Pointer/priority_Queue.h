#pragma once
#ifndef PriorityQueue
#define PriorityQueue

#define MAX_ELEMENT 100

//typedef struct {
//	int key;
//}element;

//typedef struct {
//	int key;	//scoville rate
//}element;

typedef struct {
	int seat_num;	//1~100
	int key;	//end_time
}element;

typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
}Heap_Type;

void init(Heap_Type*);
int is_empty(Heap_Type);
int is_full(Heap_Type);
void insert(Heap_Type*, element);
element del(Heap_Type*);

#endif