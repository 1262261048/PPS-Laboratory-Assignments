#include <stdio.h>

long long factIter(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

long long factRec(int n) {
    if (n <= 1) return 1;
    return n * factRec(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld %lld\n", factIter(n), factRec(n));
    return 0;
}