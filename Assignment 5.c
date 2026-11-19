#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char s1[100], s2[100], s3[100];
    scanf("%d %s %s", &choice, s1, s2);
    switch (choice) {
        case 1: printf("%zu\n", strlen(s1)); break;
        case 2: strcpy(s3, s1); printf("%s\n", s3); break;
        case 3: strcat(s1, s2); printf("%s\n", s1); break;
        case 4: printf("%d\n", strcmp(s1, s2)); break;
        default: printf("Invalid\n");
    }
    return 0;
}