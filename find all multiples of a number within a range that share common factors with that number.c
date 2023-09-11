#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void findCommonFactors(int num, int rangeStart, int rangeEnd) {
    printf("Multiples of %d within the range [%d, %d] that share common factors with %d are:", num, rangeStart, rangeEnd, num);

    for (int i = rangeStart; i <= rangeEnd; i++) {
        if (i % num == 0) {
            int gcd = findGCD(i, num);
            if (gcd > 1) {
                printf(" %d", i);
            }
        }
    }

    printf("\n");
}

int main() {
    int number, rangeStart, rangeEnd;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the range start: ");
    scanf("%d", &rangeStart);

    printf("Enter the range end: ");
    scanf("%d", &rangeEnd);

    findCommonFactors(number, rangeStart, rangeEnd);

    return 0;
}
