#include <stdio.h>
#include <string.h>

void reverse(char s[], int len);

int main(int argc, char *argv[]) {
    char s[] = argv[1];
    int len = strlen(s);
    printf("Original: %s\t", s);
    reverse(s, len);
    printf("Reversed: %s\n", s);
    return 0;
}

void reverse(char s[], int len) {
    int i = 0
    int j = len;
    char t;
    while (i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}