#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <time.h>

void print_list(int* list) {
	printf("\n==================================\n");
	for (int i = 0; i < 100; i++)
	{
		printf("%d ", list[i]);
	}
	if (is_sorted(list, 100)) printf("\nSorted!");
	else printf("\nNot sorted yet..");
	printf("\n==================================\n");
}

int main() {
	srand(time(NULL));
	int list[100];

	for (int i = 0; i < 100; i++)
	{
		list[i] = rand() % 100;
	}

	print_list(list);

	//selection_sort(list, 100);
	//insertion_sort(list, 100);
	//bubble_sort(list, 100);
	//shell_sort(list, 100);
	//merge_sort(list, 100);	
	//quick_sort(list, 100);
	radix_sort(list, 100, 2);

	print_list(list);
}