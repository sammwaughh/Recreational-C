#include <stdio.h>

int multipleDigits(int n);

int main(int argc, char *argv[]) {
    int input = 67827;
    int output = multipleDigits(input);
    if (output == 0) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    return 0;
}

int multipleDigits(int n) {
    return 0;
}