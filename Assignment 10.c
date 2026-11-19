#include <stdio.h>

int isLeap(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int dayOfWeek(int y, int m, int d) {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (m < 3) y -= 1;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

int main() {
    int year, daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    scanf("%d", &year);
    if (isLeap(year)) daysInMonth[1] = 29;
    for (int m = 0; m < 12; m++) {
        printf("\n--- %s %d ---\nSu Mo Tu We Th Fr Sa\n", months[m], year);
        int start = dayOfWeek(year, m + 1, 1);
        for (int s = 0; s < start; s++) printf("   ");
        for (int d = 1; d <= daysInMonth[m]; d++) {
            printf("%2d ", d);
            if ((start + d) % 7 == 0) printf("\n");
        }
        printf("\n");
    }
    return 0;
}