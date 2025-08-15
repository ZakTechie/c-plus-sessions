#include <stdio.h>
#include <limits.h> // علشان نعرف أقصى قيمة للـ int

int main() {
    int x = INT_MAX; // أكبر قيمة ممكنة للـ int
    printf("Before overflow: %d\n", x);

    // x = x + 1; // هنا هيحصل overflow
    printf("After overflow: %d\n", x);

    return 0;
}
