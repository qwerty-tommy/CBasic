#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int me;
    int com;

    while (1) {
        scanf("%d", &me);
        me = me % 3;
        com = rand() % 3;
        switch (me)
        {
        case 0:
            switch (com)
            {
            case 0:
                printf("YOU : ����\tCOM : ����\t���\n");
                break;
            case 1:
                printf("YOU : ����\tCOM : ����\t�̱�\n");
                break;
            case 2:
                printf("YOU : ����\tCOM : ��\t��\n");
                break;
            default:
                break;
            }
            break;
        case 1:
            switch (com)
            {
            case 0:
                printf("YOU : ����\tCOM : ����\t��\n");
                break;
            case 1:
                printf("YOU : ����\tCOM : ����\t���\n");
                break;
            case 2:
                printf("YOU : ����\tCOM : ��\t�̱�\n");
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (com)
            {
            case 0:
                printf("YOU : ��\tCOM : ����\t�̱�\n");
                break;
            case 1:
                printf("YOU : ��\tCOM : ����\t��\n");
                break;
            case 2:
                printf("YOU : ��\tCOM : ��\t���\n");
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}