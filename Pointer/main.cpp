#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_stack.h"

////ex03
//typedef struct {
//	int student_no;
//	char name[MAX_STRING];
//	char address[MAX_STRING];
//}element;
// 
//int main() {
//	StackType s;
//	element ie, oe;
//	int cho;
//	init(&s);
//	while (1) {
//		printf("1.push 2.pop 3.peek 4.exit\n");
//		scanf("%d", &cho);
//		
//		switch (cho)
//		{
//		case 1:
//			printf("no. name addr : ");
//			scanf("%d %s %s", &ie.student_no, ie.name, ie.address);
//			push(&s, ie);
//			break;
//		case 2:
//			oe = pop(&s);
//			printf("name: %s\n", oe.name);
//			printf("addr: %s\n", oe.address);
//			printf("no.: %d\n", oe.student_no);
//			break;
//		case 3:
//			oe = peek(&s);
//			printf("name: %s\n", oe.name);
//			printf("addr: %s\n", oe.address);
//			printf("no.: %d\n", oe.student_no);
//			break;
//		case 4:
//			return 0;
//		default:
//			break;
//		}
//	}
//}

////ex05 괄호검사
// 
//typedef struct {
//	char ch;
//}element;
//
//int is_opn(char c) {
//	return (c == '{' || c == '(' || c == '[');
//}
//
//int is_cls(char c) {
//	return (c == '}' || c == ')' || c == ']');
//}
//
//int is_pair(char op, char cl) {
//	return (op == '{' && cl == '}') || (op == '(' && cl == ')') || (op == '[' && cl == ']');
//}
//
//int check_para(char*buf) {
//	StackType st;
//	element tmp;
//	init(&st);
//
//	for (int i = 0; i < strlen(buf); i++)
//	{
//		if (is_opn(buf[i]))
//		{
//			tmp.ch = buf[i];
//			push(&st, tmp);
//		}
//		else if (is_cls(buf[i]))
//		{
//			tmp = peek(&st);
//			if (!is_pair(tmp.ch, buf[i])) {
//				return -1;
//			}
//			pop(&st);
//		}
//	}
//
//	if (is_empty(&st)) return 0;
//	else {
//		while (!is_empty(&st)) {
//			return -1;
//		}
//	}
//}
//
//
////int main() {
////	char buf[MAX_STRING];
////
////	printf("Input string : ");
////	scanf("%s", buf);
////
////	if (check_para(buf) == -1) printf("mismatch..\n");
////	else printf("match!\n");
////}
//
//
////ex06 후위표기 계산기
//#include <ctype.h>
//
//int is_priority_1(char ch) {
//	return ch == '*' || ch == '/';
//}
//
//int is_priority_2(char ch) {
//	return ch == '+' || ch == '-';
//}
//
//void in_to_post(StackType* state_stack, char* target) {
//	StackType op_stack;
//	element tmp;
//
//	init(&op_stack);
//	
//	for (int i = 0; i < strlen(target); i++)
//	{
//		tmp.ch = target[i];
//		if (isdigit(tmp.ch))
//		{	
//			push(state_stack,tmp);
//			continue;
//		}
//
//		if (is_opn(tmp.ch))
//		{
//			push(&op_stack, tmp);
//			continue;
//		}
//
//		if (is_cls(tmp.ch)) {
//			while(!is_opn(peek(&op_stack).ch)) push(state_stack, pop(&op_stack));
//			pop(&op_stack);
//			continue;
//		}
//
//		if (is_empty(&op_stack)) {
//			push(&op_stack, tmp);
//			continue;
//		}
//
//		if (is_priority_2(tmp.ch) && is_priority_1(peek(&op_stack).ch)) {
//			while (!is_empty(&op_stack)) push(state_stack, pop(&op_stack));
//		}
//		push(&op_stack, tmp);
//	}
//
//	while (!is_empty(&op_stack)) push(state_stack, pop(&op_stack));
//}
//
//int cal(StackType state_stack) {
//	StackType tmp_st;
//	init(&tmp_st);
//
//	while (!is_empty(&state_stack)) push(&tmp_st, pop(&state_stack));
//
//	int num1, num2;
//	element tmp;
//
//	StackType res_st;
//	init(&res_st);
//	
//	while (!is_empty(&tmp_st)) {
//		tmp = pop(&tmp_st);
//
//		if (isdigit(tmp.ch)) push(&res_st, tmp);
//		else {
//			num2 = pop(&res_st).ch - 48;
//			num1 = pop(&res_st).ch - 48;
//
//			switch (tmp.ch)
//			{
//			case '+':
//				tmp.ch = num1 + num2 + 48;
//				break;
//			case '-':
//				tmp.ch = num1 - num2 + 48;
//				break;
//			case '*':
//				tmp.ch = num1 * num2 + 48;
//				break;
//			case '/':
//				tmp.ch = num1 / num2 + 48;
//				break;
//			default:
//				break;
//			}
//			
//			push(&res_st, tmp);
//		}
//	}
//
//	return pop(&res_st).ch - 48;
//}
//
//int main() {
//	StackType state_stack;
//	char buf[100];
//
//	init(&state_stack);
//
//	printf("Input in-fix statement : ");
//	scanf("%s", buf);
//
//	//strcpy(buf, "1+3*2/2");
//
//	if (check_para(buf) == -1) {
//		printf("parenthesis-pair err..");
//		return 0;
//	}
//
//	in_to_post(&state_stack, buf);
//
//	printf("result : %d",cal(state_stack));
//}

//pr01
#define MAZE_COL_SIZE 10
#define MAZE_ROW_SIZE 10
#include <windows.h>

int check_Invalid(int maze[MAZE_COL_SIZE][MAZE_ROW_SIZE],int x, int y) {
	return (
		x < MAZE_COL_SIZE - 1 && 
		x > 0 && 
		y < MAZE_COL_SIZE - 1 &&
		y > 0 &&
		maze[x][y]==0
	);
}

void print_maze(int maze[MAZE_COL_SIZE][MAZE_ROW_SIZE]) {
	for (int i = 0; i < MAZE_COL_SIZE; i++)
	{
		for (int j = 0; j < MAZE_ROW_SIZE; j++)
		{
			printf("%d ",maze[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n\n\n\n\n\n\n\n");
}

int solve_maze(int maze[MAZE_COL_SIZE][MAZE_ROW_SIZE], element start, element end) {
	StackType next_stack;
	element cur;
	element tmp;

	int difx[4] = { -1,0,1,0 };
	int dify[4] = { 0,-1,0,1 };

	init(&next_stack);
	push(&next_stack, start);

	while (!is_empty(&next_stack))
	{
		cur = pop(&next_stack);
		maze[cur.x][cur.y] = 2;

		print_maze(maze);

		for (int i = 0; i < 4; i++)
		{
			tmp.x = cur.x + difx[i];
			tmp.y = cur.y + dify[i];
			if (check_Invalid(maze, tmp.x, tmp.y)) push(&next_stack, tmp);
		}

		Sleep(0.5);
	}

	if (maze[end.x][end.y] == 2) return 0;
	return -1;
}

int main() {
	int maze[MAZE_COL_SIZE][MAZE_ROW_SIZE] = {
		{0,1,1,1,1,1,1,1,1,1},
		{0,0,0,1,1,1,0,1,1,1},
		{1,1,0,0,0,0,0,0,1,1},
		{1,1,0,1,1,1,1,0,1,1},
		{1,1,0,1,1,0,0,0,1,1},
		{1,1,0,1,1,1,1,1,1,1},
		{1,1,0,0,0,0,1,0,0,1},
		{1,1,0,1,0,1,1,0,1,1},
		{1,0,0,1,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,1,1,0},
	};

	element start,end;
	start.x = 0;
	start.y = 0;
	end.x = 9;
	end.y = 9;

	if(solve_maze(maze,start,end)==-1) printf("Can't solve..");
}