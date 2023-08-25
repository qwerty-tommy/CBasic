#pragma once
#ifndef Sort
#define Sort
void selection_sort(int* list, int n);
void insertion_sort(int* list, int n);
void bubble_sort(int* list, int n);
void shell_sort(int* list, int n);
void merge_sort(int* list, int n);
void quick_sort(int* list, int n);
void radix_sort(int* list, int n, int max_len);

int is_sorted(int* list, int n);
#endif
