#include <stdio.h>

typedef struct {
    int value;
} Group;

Group group_add(Group a, Group b) {
    Group result;
    result.value = a.value + b.value;
    return result;
}

Group group_zero() {
    Group result;
    result.value = 0;
    return result;
}

Group group_inverse(Group a) {
    Group result;
    result.value = -a.value;
    return result;
}

int main() {
    Group a = {7};
    Group b = {3};
    Group sum = group_add(a, b);
    Group inverse_a = group_inverse(a);
    Group zero = group_add(a, inverse_a);

    printf("Summ: %d\n", sum.value);
    printf("inverse element: %d\n", inverse_a.value);
    printf("neutral element check: %d\n", zero.value);

    return 0;
}
