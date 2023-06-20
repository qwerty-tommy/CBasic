//1. ?를 0.5초 간격으로 출력하다가 c를 누르면 <<가위바위보>> 무한 반복하다가
//특정 키 누르면 종료되는 프로그래밍 구현

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int main()
{
    char ch;
    char M[3][10] = { "가위", "바위", "보" };
    int i, com;

    while (!_kbhit())
    {

        putchar('?');
        Sleep(500);
    }

    
    printf("\n");

    if ((ch = _getch()) == 'x') printf("프로그램 종료!\n");
    else if (ch == 'c') {

        printf("가위바위보 시작!\n\n");

        while (1) {

            srand(time(NULL)); // 난수 생성을 위한 시드 설정

            // 사용자로부터 가위(0), 바위(1), 보(2) 중 하나 입력 받기
            printf("가위(0), 바위(1), 보(2) 중 하나를 선택하세요: ");
            scanf_s("%d", &i);

            // 컴퓨터의 선택을 랜덤으로 생성
            com = rand() % 3;

            // 사용자와 컴퓨터의 선택 출력
            printf("사용자: %s, 컴퓨터: %s\n", M[i], M[com]);

            // 가위바위보 결과 출력
            if (i == com) printf("비겼습니다!\n");
            else if ((i == 0 && com == 2) || (i == 1 && com == 0) || (i == 2 && com == 1))
                printf("사용자가 이겼습니다!\n");
            else printf("컴퓨터가 이겼습니다!\n");
        }
    }
    else printf("예진이는 코딩 천재!\n");

    return 0;
}