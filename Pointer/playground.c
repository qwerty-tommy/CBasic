//1. ?�� 0.5�� �������� ����ϴٰ� c�� ������ <<����������>> ���� �ݺ��ϴٰ�
//Ư�� Ű ������ ����Ǵ� ���α׷��� ����

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int main()
{
    char ch;
    char M[3][10] = { "����", "����", "��" };
    int i, com;

    while (!_kbhit())
    {

        putchar('?');
        Sleep(500);
    }

    
    printf("\n");

    if ((ch = _getch()) == 'x') printf("���α׷� ����!\n");
    else if (ch == 'c') {

        printf("���������� ����!\n\n");

        while (1) {

            srand(time(NULL)); // ���� ������ ���� �õ� ����

            // ����ڷκ��� ����(0), ����(1), ��(2) �� �ϳ� �Է� �ޱ�
            printf("����(0), ����(1), ��(2) �� �ϳ��� �����ϼ���: ");
            scanf_s("%d", &i);

            // ��ǻ���� ������ �������� ����
            com = rand() % 3;

            // ����ڿ� ��ǻ���� ���� ���
            printf("�����: %s, ��ǻ��: %s\n", M[i], M[com]);

            // ���������� ��� ���
            if (i == com) printf("�����ϴ�!\n");
            else if ((i == 0 && com == 2) || (i == 1 && com == 0) || (i == 2 && com == 1))
                printf("����ڰ� �̰���ϴ�!\n");
            else printf("��ǻ�Ͱ� �̰���ϴ�!\n");
        }
    }
    else printf("�����̴� �ڵ� õ��!\n");

    return 0;
}