#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int s = a + b + c;
        if (s >= 2) {
            ans++;
        }
    }

    printf("%d\n", ans);
    return 0;
}
