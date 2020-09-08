#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc) {
    int temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;
}

void rotateRight(int* pa, int* pb, int* pc) {
    int temp = *pc;
    *pc = *pb;
    *pb = *pa;
    *pa = temp;
}

int main() {
    int a = 10, b = 20, c = 30;
    int input;
    while(1) {
        printf("%d:%d:%d\n", a, b, c);
        scanf("%d", &input);
        if (input == 1) {
            rotateLeft(&a, &b, &c);
        }
        else if (input == 2) {
            rotateRight(&a, &b, &c);
        }
        else if (input == 3) {
            break;
        }
        else {
            printf("Error: Wrong input\n");
            break;
        }
    }

    return 0;
}
