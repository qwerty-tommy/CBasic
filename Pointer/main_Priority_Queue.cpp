#include <stdio.h>
#include <stdlib.h>
#include "priority_Queue.h"

//typedef struct {
//	int key;
//}element;

//ex01~02 - 최소 우선순위큐 삽입 삭제 구현
//void menu() {
//	printf("============================\n");
//	printf("1. insert\n");
//	printf("2. delete\n");
//	printf("3. print\n");
//	printf("4. exit\n");
//	printf("============================\n");
//	printf("op : ");
//}
//
//int main() {
//	Heap_Type ht;
//	int sel;
//	init(&ht);
//	element tmp;
//
//	while (1)
//	{
//		menu();
//		scanf("%d", &sel);
//
//		switch (sel)
//		{
//		case 1:
//			printf("\ninput data : ");
//			scanf("%d", &tmp.key);
//			insert(&ht, tmp);
//			break;
//		case 2:
//			printf("\ndel data : %d\n",del(&ht));
//			break;
//		case 3:
//			printf("\n\n");
//			for (int i = 1; i < ht.heap_size+1; i++)
//			{
//				printf("%d ", ht.heap[i]);
//			}
//			printf("\n\n");
//			break;
//		case 4:
//			return 0;
//		default:
//			break;
//		}
//	}
//	
//	return 0;
//}
//
/*
1
15
1
35
1
20
1
50
1
45
1
40
1
30
1
80
1
70
1
60
1
90

*/


//void heapify(int* arr, int size) {
//	for (int i = 1; i < size; ++i)
//	{
//		int child = i;
//		do {
//			//자식 노드가 부모 노드보다 크면 교환
//			int root = (child - 1) / 2;
//			if (arr[root] > arr[child]) {	//최소 최대 전환 부등호
//				int temp = arr[root];
//				arr[root] = arr[child];
//				arr[child] = temp;
//			}
//			child = root;
//		} while (child != 0);
//	}
//}
//
//void heap(int* arr, int* size) {
//	int temp = arr[0];
//	arr[0] = arr[*size - 1];
//	arr[*size - 1] = temp;
//	--(*size);
//}

////ex03 - 힙정렬 구현
//int main() {
//	int size = 10;
//	int arr[10] = { 5,6,10,4,3,8,7,1,2,9 };
//
//	for (int i = 0; i < 10; i++) {
//		heapify(arr, size);
//		heap(arr, &size);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////pr06 - 힙정렬 후 이진탐색
//int find(int* heap, int target,int low, int high) {
//	int mid=(low + high)/2;
//	if (target > heap[mid]) return find(heap, target, mid, high);
//	else if (target < heap[mid]) return find(heap, target, low, mid);
//	else return mid;
//}
//
//int main() {
//	int size = 10;
//	int arr[10] = { 9,7,6,5,4,3,2,2,1,3 };
//
//	for (int i = 0; i < 10; i++) {
//		heapify(arr, size);
//		heap(arr, &size);
//	}
//
//	printf("Heap : ");
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	int target;
//	printf("찾을 값 : ");
//	scanf("%d", &target);
//
//	printf("%d번째 있습니다.\n", find(arr, target,0,size-1));
//
//	return 0;
//}

////pr07 - 스코빌 지수
//int calc_mix(int* scoville_list, int list_size, int target) {
//	int count = 0;
//	element tmp;
//	Heap_Type ht;
//	init(&ht);
//
//	for (int i = 0; i < list_size; i++)		//generate heap
//	{
//		tmp.key = scoville_list[i];
//		insert(&ht, tmp);
//	}
//
//	for (; !is_empty(ht) && ht.heap[1].key <= target; count++)
//	{
//		tmp = del(&ht);
//		tmp.key = tmp.key + 2 * del(&ht).key;
//		insert(&ht, tmp);
//	}
//	return count;
//}
//
//int main() {
//	int scoville_list[] = { 3,2,9,1,12,10 };
//	int list_size = sizeof(scoville_list) / sizeof(scoville_list[0]);
//	int target = 14;
//
//	printf("각음식의 스코빌 지수 : ");
//	for (int i = 0; i < list_size; i++)
//	{
//		printf("%d ", scoville_list[i]);
//	}
//	printf("\n\n");
//
//	printf("희망하는 스코빌 지수 : %d\n", target);
//	printf("%d 스코빌 지수로 만들기 위해 섞은 횟수 : %d\n", target, calc_mix(scoville_list, list_size, target));
//	
//	return 0;
//}


//pr08 - 컴퓨터 이용 시간 조정

//typedef struct {
//	int seat_num;	//1~100
//	int key;	//end_time
//}element;

#define MAX_INPUT_SIZE 100
#define MAX_TIME_LIMIT 1000
int seat_usage=0;

int find_min_time(int* seat, int input_size) {
	for (int i = 0; i < input_size; i++)
	{
		if (seat[i] == 0) {
			seat_usage = (seat_usage > i) ? seat_usage : i;
			return i + 1;
		};
	}
}

int main() {
	int input_size;
	int sel;
	int data[MAX_INPUT_SIZE][2];
	
	printf("사람수 : ");
	scanf("%d", &input_size);

	printf("각사람의 시작시간 종료시간\n");
	for (int i = 0; i < input_size; i++)
	{
		scanf("%d %d", &data[i][0], &data[i][1]);
	}

	int time = 0;
		int interval = 10;
		int seat[MAX_INPUT_SIZE] = { 0, };
		int seat_sum[MAX_INPUT_SIZE] = { 0, };
	element tmp;

	Heap_Type ht;
	init(&ht);

	for (int time = 0; time < MAX_TIME_LIMIT; time += interval)
	{
		for (int i = 0; i < input_size; i++)
		{
			if (!is_empty(ht) && ht.heap[1].key == time)	//peek.end_time==current_time
			{
				seat[del(&ht).seat_num - 1] = 0;		//pop, seat-rollback
			}

			if (data[i][0] == time) {
				if (is_full(ht)) {
					printf("heap이 꽉 찼습니다.");
					return 0;
				}

				tmp.key = data[i][1];
				tmp.seat_num = find_min_time(seat, input_size);
				seat_sum[tmp.seat_num-1]++;
				seat[tmp.seat_num - 1]++;
				insert(&ht, tmp);
			}
		}
	}

	printf("\n컴퓨터 최소 대수 : %d\n\n", seat_usage+1);

	for (int i = 0; i < seat_usage+1; i++)
	{
		printf("%d 번자리 : %d 명\n",i, seat_sum[i]);
	}

	return 0;
}

/*
5
20 50
10 100
30 120
60 110
80 90

*/