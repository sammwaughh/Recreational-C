#include <stdio.h>

int multipleDigits(int n);
void printArray(int nums[], int len);

int main(int argc, char *argv[]) {
    int input = 67824;
    int output = multipleDigits(input);
    if (output == 0) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    return 0;
}

int multipleDigits(int n) {
    int unit;
    int counts[10] = {0};
    while (n != 0) {
        unit = n % 10;
        if (counts[unit] == 1) {
            return 1;
        } else {
            counts[unit] = 1;
        }
        n /= 10;
    }
    return 0;
    /*for (int i = 0; i < 10; i++) {
        if (counts[i] > 1) {
            return 1;
        }
    }*/
    return 0;
}

void printArray(int nums[], int len) {
    int i;
    printf("[");
    for (i = 0; i < len-1; i++) {
        printf("%d, ", nums[i]);
    }
    printf("%d]\n", nums[i]);
}