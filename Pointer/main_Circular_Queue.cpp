#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "circular_Queue.h"


//typedef struct {
//	element queue[MAX_QUEUE_SIZE];
//	int front;
//	int rear;
//}QueueType;
////queue-test
//int main() {
//	QueueType q;
//	init(&q);
//	int cho;
//	element tmp;
//
//	printf("front=%d rear=%d\n", q.front, q.rear);
//
//	while (1) {
//		printf("1.enqueue 2. dequeue 3.exit\n");
//		scanf("%d", &cho);
//		switch (cho)
//		{
//		case 1:
//			printf("input int : ");
//			scanf("%d", &tmp.data);
//			enqueue(&q, tmp);
//			printf("front=%d rear=%d\n", q.front, q.rear);
//			break;
//		case 2:
//			printf("deque()=%d\n", dequeue(&q));
//			printf("front=%d rear=%d\n", q.front, q.rear);
//			break;
//		case 3:
//			return 0;
//		default:
//			break;
//		}
//	}
//}

//햄버거가게 공간 시뮬
#define CHEESE_MAKINGTIME 12
#define BULGOGI_MAKINGTIME 15
#define DOUBLE_MAKINGTIME 24
#define ORDER_SIZE 240
#define WORK_TIME 3600

int main() {
	srand(time(NULL));

	element tmp;
	QueueType q;
	init(&q);

	int room_size=MAX_QUEUE_SIZE;
	int simul_size=10;
	int making_times[3] = { CHEESE_MAKINGTIME ,BULGOGI_MAKINGTIME,DOUBLE_MAKINGTIME };
	int counter[3] = { 0, };
	int next_time=0;
	int rand_int;
	int suc_cnt = 0;

	printf("시물레이션 횟수 : ");
	scanf("%d", &simul_size);

	for (int i = 0; i < simul_size; i++)
	{
		for (int cur_time = 0; cur_time < WORK_TIME; cur_time++)
		{
			if (cur_time % 15 == 0 && is_full(&q)) {
				printf("%d 꽉찼습니다.\n", i);
				printf("포화 시각 %d분 %d초\n\n", cur_time / 60, cur_time % 60);
				break;
			}

			if (cur_time % 15 == 0) {
				rand_int = rand() % 3;
				tmp.time = making_times[rand_int];
				enqueue(&q,tmp);
				counter[rand_int]++;
			}
			if (next_time < cur_time && !is_empty(&q)) {
				next_time += dequeue(&q).time;
			}
		}
		if (next_time >= 3600) {
			printf("%d 넉넉합니다.\n", i);
			printf("시물레이션 결과!\n- 대기실사이즈 : %d\n- 치즈 버거 : %d\n- 불고기 버거 : %d\n- 더블 버거 : %d\n\n", room_size, counter[0], counter[1], counter[2]);
			suc_cnt++;
		}
		next_time = counter[0] = counter[1] = counter[2] = 0;
		init(&q);
	}

	printf("\n\n테스트케이스 : %d\nSuccess : %d\nFail : %d\n\n성공률 : %.2f", simul_size, suc_cnt, simul_size - suc_cnt, ((float)suc_cnt / (float)simul_size) * 100);

	return 0;
}