#include <stdio.h>
#include <string.h>

void reverse(int nums[], int len);
void printArray(int nums[], int len);

int main(int argc, char *argv[]) {
    int nums[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    printArray(nums, 9);
    reverse(nums, 9);
    printArray(nums, 9);
    return 0;
}

void printArray(int nums[], int len) {
    int i;
    for (i = 0; i < len-1; i++) {
        printf("%d, ", nums[i]);
    }
    printf("%d\n", nums[i]);
}

void reverse(int nums[], int len) {
    int i = 0;
    int j = len-1;
    int t;
    while (i < j) {
        t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
        i++;
        j--;
    }
}