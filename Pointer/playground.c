#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    srand(time(NULL));

    while (1) {
        switch (rand() % 5)
        {
        case 0:
            printf("��\n");
            break;
        case 1:
            printf("��\n");
            break;
        case 2:
            printf("��\n");
            break;
        case 3:
            printf("��\n");
            break;
        case 4:
            printf("��\n");
            break;
        default:
            break;
        }

        Sleep(1000);
    }

    return 0;
}