#pragma once
#ifndef CircularQueue
#define CircularQueue

#define MAX_QUEUE_SIZE 30

typedef struct {
	int time;
}element;

typedef struct {
	element queue[MAX_QUEUE_SIZE];
	int front;
	int rear;
}QueueType;

void error(char* msg);
void init(QueueType* q);
int is_empty(QueueType* q);
int is_full(QueueType* q);
void enqueue(QueueType* q, element item);
element dequeue(QueueType* q);
element peek(QueueType* q);

#endif // CircularQueue
