#include "sort.h"
#include "circular_Queue.h"
#include <malloc.h>
#include <stdlib.h>
#include <math.h>


void swap(int* list, int a, int b) {
	int tmp = list[a];
	list[a] = list[b];
	list[b] = tmp;
}

void selection_sort(int* list, int n)
{
	int tmp;

	for (int i = 0; i < n - 1; i++)
	{
		tmp = i;
		for (int j = i + 1; j < n; j++)
		{
			if (list[j] < list[tmp]) tmp = j;
;		}
		swap(list, i, tmp);
	}

}

void insertion_sort(int* list, int n) {
	int tmp;
	int j;
	for (int i = 1; i < n ; i++)
	{
		tmp = list[i];
		for (j = i-1; j >= 0&& list[j]> tmp; j--) {
			list[j + 1] = list[j];
		}
		list[j + 1] = tmp;
	}
}

void bubble_sort(int* list, int n)
{
	int tmp;

	for (int i = n-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (list[j] > list[j+1]) swap(list, j, j+1);
		}
	}

}

void gap_insertion_sort(int* list, int start, int end, int gap) {
	int tmp,j,i;
	for (i = start + gap; i <= end; i += gap)
	{
		tmp = list[i];
		for (j = i - gap; j >= start && list[j] > tmp; j -= gap) {
			list[j + gap] = list[j];
		}
		list[j + gap] = tmp;
	}
}

void shell_sort(int* list, int n) {
	int gap, i;
	for (gap = n/2; gap > 0 ; gap/=2)
	{
		if ((gap % 2) == 0)gap += 1;
		for (i = 0; i < gap; i++)
		{
			gap_insertion_sort(list, i, n-1, gap);
		}
	}
}

int* tmp;

void merge_rec(int* list, int start, int end) {
	if ((end - start) < 1) return;

	int mid = (start + end) / 2;

	merge_rec(list, start, mid);
	merge_rec(list, mid + 1, end);

	int idx = start;
	int a = start, b = mid + 1;

	while (true) {
		if (a == mid + 1) {
			for (int i = b; i < end+1; i++)
			{
				tmp[idx++] = list[i];
			}
			break;
		}
		if (b == end + 1) {
			for (int i = a; i < mid + 1; i++)
			{
				tmp[idx++] = list[i];
			}
			break;
		}

		if (list[a] < list[b]) {
			tmp[idx++] = list[a++];
		}
		else {
			tmp[idx++] = list[b++];
		}
	}

	for (int i = start; i < end + 1; i++)
	{
		list[i] = tmp[i];
	}
}

void merge_sort(int* list, int n) {
	tmp = (int*)malloc(sizeof(int) * n);
	merge_rec(list, 0, n-1);
}

void quick_rec(int* list, int start, int end) {
	if (end - start <= 0) return;

	int pivot = start;
	int front = start + 1, rear = end;
	
	while (rear - front >= 0) {
		if (list[pivot] < list[front] && list[pivot] > list[rear]) {
			swap(list, front, rear);
		}

		if (list[pivot] >= list[front])
		{
			front++;
		}
		if (list[pivot] <= list[rear])
		{
			rear--;
		}
	}

    int tmp = list[pivot];
    list[pivot] = list[rear];
    list[rear] = tmp;

    pivot = rear;

	quick_rec(list, start, pivot -1);
	quick_rec(list, pivot +1, end);
}

void quick_sort(int* list, int n) {
	quick_rec(list, 0, n - 1);
}

//typedef int element;
//
//typedef struct {
//	element queue[MAX_QUEUE_SIZE];
//	int front;
//	int rear;
//}QueueType;

int power_of_10(int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result *= 10;
	}
	return result;
}

void radix_sort(int* list, int n, int max_len)
{
	QueueType sorter[10];
	for (int i = 0; i < 10; i++)
	{
		init(&sorter[i]);
	}

	for (int i = 0; i < max_len; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tmp2 = power_of_10(i + 1);
			int tmp = i == 0 ? list[j] % 10 : list[j] % power_of_10(i + 1) / power_of_10(i);	//pow는 사용못함?

			enqueue(&sorter[tmp], list[j]);
		}

		int idx=0;
		for (int j = 0; j < 10; j++)
		{
			while (!is_empty(&sorter[j])) list[idx++]=dequeue(&sorter[j]);
		}
	}
}

int is_sorted(int* list, int n) {
	for (int i = 0; i < n-1; i++)
	{
		if (list[i] > list[i + 1])return false;
	}
	return true;
}