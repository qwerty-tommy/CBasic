#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//다항식을 배열로 표현
int main() {
	int a[10][2] = { {3,8},{1,7},{0,1}, };
	int b[10][2] = { {3,10},{2,3},{0,1}, };

	int sum[10][2];
	int idx = 0, res;

	for (int i = 0; i < 10; i++) {
		if (a[i][1] != 0 && b[i][1] != 0) {
			sum[idx][0] = i;
			sum[idx++][1] = a[i][1] + b[i][1];
		}
		else if (a[i][1] == 0 && b[i][1] != 0) {
			sum[idx][0] = i;
			sum[idx++][1] = b[i][1];
		}
		else if (a[i][1] != 0 && b[i][1] == 0) {
			sum[idx][0] = i;
			sum[idx++][1] = a[i][1];
		}
	}

	for (int i = 0; i < idx; i++)
	{
		printf("%dx^%d + ", sum[i][1], sum[i][0]);
	}
	printf("%d", sum[0][1]);
}


//희소행렬이 아닌 배열의 덧셈
/*ypedef struct _element {
	int row;
	int col;
	int value;
}Element;

int main() {
	int a[3][3] = { {2,3,0}, {8,9,0}, {7,0,5} };
	int b[3][3] = { {1,0,0}, {1,0,0}, {1,0,0} };
	
	int aa[9][3][3];
	int bb[9][3][3];
	
	int res;
	int idxa = 0;
	int idxb = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			res = a[i][j];
			if (res!=0)
			{
				aa[idxa]=
			}
		}
	}
	
}*/