#include <stdio.h>
#include "priority_Queue.h"


void init(Heap_Type* h) {
	h->heap_size = 0;
}

int is_empty(Heap_Type h) {
	return h.heap_size == 0;
}

int is_full(Heap_Type h) {
	return h.heap_size == MAX_ELEMENT-1;
}


//최소 우선순위 큐
void insert(Heap_Type* h, element x) {
	if (is_full(*h)) {
		printf("Insert err - heap full");
		return;
	}
	h->heap[++h->heap_size] = x;

	int cur_idx=h->heap_size;
	element tmp;

	while (1)
	{
		if (h->heap[cur_idx].key < h->heap[cur_idx / 2].key)
		{
			tmp = h->heap[cur_idx];
			h->heap[cur_idx] = h->heap[cur_idx / 2];
			h->heap[cur_idx / 2] = tmp;
			cur_idx = cur_idx / 2;
		}
		else break;
	}

}

element del(Heap_Type* h) {
	element tmp= h->heap[h->heap_size--], res=h->heap[1];
	int cur_idx = 1;
	int child_idx = cur_idx * 2;

	while (child_idx<= h->heap_size)
	{
		if (child_idx < h->heap_size && h->heap[child_idx].key > h->heap[child_idx + 1].key) child_idx++;
		if (tmp.key <= h->heap[child_idx].key) break;
		h->heap[cur_idx] = h->heap[child_idx];
		cur_idx = child_idx;
		child_idx *= 2;
	}
	h->heap[cur_idx] = tmp;
	return res;
}
