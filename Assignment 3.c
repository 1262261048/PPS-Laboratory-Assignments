#include <stdio.h>

int main() {
    int choice;
    float a, b;
    scanf("%d %f %f", &choice, &a, &b);
    switch (choice) {
        case 1: printf("%.2f\n", a + b); break;
        case 2: printf("%.2f\n", a - b); break;
        case 3: printf("%.2f\n", a * b); break;
        case 4: printf("%.2f\n", a / b); break;
        default: printf("Invalid\n");
    }
    return 0;
}