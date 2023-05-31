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
                printf("YOU : πŸ¿ß\tCOM : πŸ¿ß\t∫Ò±Ë\n");
                break;
            case 1:
                printf("YOU : πŸ¿ß\tCOM : ∞°¿ß\t¿Ã±Ë\n");
                break;
            case 2:
                printf("YOU : πŸ¿ß\tCOM : ∫∏\t¡¸\n");
                break;
            default:
                break;
            }
            break;
        case 1:
            switch (com)
            {
            case 0:
                printf("YOU : ∞°¿ß\tCOM : πŸ¿ß\t¡¸\n");
                break;
            case 1:
                printf("YOU : ∞°¿ß\tCOM : ∞°¿ß\t∫Ò±Ë\n");
                break;
            case 2:
                printf("YOU : ∞°¿ß\tCOM : ∫∏\t¿Ã±Ë\n");
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (com)
            {
            case 0:
                printf("YOU : ∫∏\tCOM : πŸ¿ß\t¿Ã±Ë\n");
                break;
            case 1:
                printf("YOU : ∫∏\tCOM : ∞°¿ß\t¡¸\n");
                break;
            case 2:
                printf("YOU : ∫∏\tCOM : ∫∏\t∫Ò±Ë\n");
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