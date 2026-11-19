#include <stdio.h>

int main() {
    FILE *src = fopen("input.txt", "r");
    FILE *dst = fopen("output.txt", "w");
    char ch;
    if (src == NULL || dst == NULL) return 1;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }
    fclose(src);
    fclose(dst);
    return 0;
}