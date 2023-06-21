#pragma once
#include "CircularQueue.h"
#include <stdio.h>
#include <stdlib.h>

void error(char* msg) {
	fprintf(stderr, "%s\n", msg);
	exit(1);
}

void init(QueueType* q) {
	q->front = q->rear = 0;
}

int is_empty(QueueType* q) {
	return q->front == q->rear;
}

int is_full(QueueType* q) {
	return q->front == (q->rear + 1) % MAX_QUEUE_SIZE;
}

void enqueue(QueueType* q, element item) {
	if (is_full(q)) error("Stack full err...");
	q->rear = (++q->rear) % MAX_QUEUE_SIZE;
	q->queue[(q->rear) % MAX_QUEUE_SIZE] = item;
}

element dequeue(QueueType* q) {
	if (is_empty(q)) error("Stack empty err...");
	q->front = (++q->front) % MAX_QUEUE_SIZE;
	return q->queue[(q->front) % MAX_QUEUE_SIZE];
}

element peek(QueueType* q){
	if (is_empty(q)) error("Stack empty err...");

	return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
}