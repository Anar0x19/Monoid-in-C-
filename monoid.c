#include <stdio.h>

typedef struct {
    int value;
} Monoid;

Monoid monoid_add(Monoid a, Monoid b) {
    Monoid result;
    result.value = a.value + b.value;
    return result;
}

Monoid monoid_zero() {
    Monoid result;
    result.value = 0;
    return result;
}

int main() {
    Monoid a = {5};
    Monoid b = {10};
    Monoid sum = monoid_add(a, b);
    Monoid zero = monoid_zero();

    printf("Summ: %d\n", sum.value);
    printf("Neutral element : %d\n", zero.value);

    return 0;
}
